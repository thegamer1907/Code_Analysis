#include <cassert>
#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

const static int infinity=999999999;

class suffix_tree{
private:
  class node;

  const std::string text;
  node*const root;
  node*const dummy;

  set<node*> possible_nodes;

  int build_index;
public:
  suffix_tree(const std::string& s):text(s+'$'),root(new node(nullptr)),dummy(new node(nullptr)){
    root->set_suffix_link(*dummy);
    for(int i=0;i<text.size();i++)
      dummy->add_child(text[i],root,std::make_pair(-i,-i));
    dummy->replace_parent(*dummy);
    root->replace_parent(*root);

    std::pair<node*,std::pair<int,int>> active_point(root,std::make_pair(0,-1));
    for(int i=0;i<text.size();i++){
      build_index=i;
      active_point=update(i,active_point);
      active_point.second.second=i;
      active_point=cannonize(active_point);
      active_point.second.second=i;
    }

    root->determine_occurances(possible_nodes);
  }

  bool has_substring(const std::string& substring)const{
    node* current_node=root;
    int length=0;
    for(int i=0;i<substring.size();i++){
      if(length==0 && !current_node->has_child(substring[i]))
        return false;
      std::pair<int,int> child_label=current_node->child_label(substring[i-length]);
      assert(length<child_label.second-child_label.first+1);
      if(text[child_label.first+length]!=substring[i])
        return false;
      if(length+1==child_label.second-child_label.first+1){
        current_node=&current_node->child(substring[i-length]);
        length=-1;
      }
      length++;
    }
    return true;
  }

  string answer(){
    if(possible_nodes.size()==0)
      return "Just a legend";

    node* current_node=root;
    node* best_node=nullptr;
    int length=0;
    for(int i=0;i+1<text.size();i++){
      if(length==0 && !current_node->has_child(text[i]))
        break;
      std::pair<int,int> child_label=current_node->child_label(text[i-length]);
      assert(length<child_label.second-child_label.first+1);
      if(text[child_label.first+length]!=text[i])
        break;
      if(length+1==child_label.second-child_label.first+1){
        node* next_node=&current_node->child(text[i-length]);
        if(possible_nodes.find(next_node)!=possible_nodes.end())
          best_node=next_node;
        current_node=next_node;
        length=-1;
      }
      length++;
    }

    if(best_node==nullptr)
      return "Just a legend";

    return best_node->value(text);
  }

  bool has_suffix(std::string suffix)const{
    node* current_node=root;
    int length=0;
    suffix+='$';
    return has_substring(suffix);
  }

  std::vector<int> suffix_array()const{
    std::vector<int> result(text.size());
    root->compute_suffix_array(text,result,0,0);
    return result;
  }

private:
  class node{
    static int count;
  private:
    node* parent_pointer;
    node* suffix_link_pointer;
    std::vector<std::tuple<char,node*,std::pair<int,int>>> children;
    int id_;
    int occurances_;

    static bool child_compare(const std::tuple<char,node*,std::pair<int,int>>& a,const std::tuple<char,node*,std::pair<int,int>>& b){
      return std::get<0>(a)<std::get<0>(b);
    }
  public:
    node(node* parent):parent_pointer(parent),suffix_link_pointer(nullptr),id_(count++){}

    void add_child(char child_start,node* child_pointer,std::pair<int,int> child_label){
      assert(child_label.first<=child_label.second);
      children.push_back(std::make_tuple(child_start,child_pointer,child_label));
    }

    void replace_child(char child_start,node* child_pointer,std::pair<int,int> child_label){
      assert(child_label.first<=child_label.second);
      for(int i=0;i<children.size();i++)
        if(std::get<0>(children[i])==child_start)
          children[i]=std::make_tuple(child_start,child_pointer,child_label);
    }

    void replace_parent(node& parent){
      parent_pointer=&parent;
    }

    node* parent(){
      return parent_pointer;
    }

    void set_suffix_link(node& new_suffix_link){
      suffix_link_pointer=&new_suffix_link;
    }

    node* suffix_link(){
      return suffix_link_pointer;
    }

    int id()const{
      return id_;
    }

    std::string value(const std::string& text)const{
      //if(!parent_pointer) return "";
      if(id_==0) return "";
      if(parent_pointer==this) return "(dummy)";
      assert(parent_pointer);
      for(int i=0;i<parent_pointer->children.size();i++)
        if(&parent_pointer->child(i)==this){
          std::pair<int,int> label=parent_pointer->child_label(i);
          return parent_pointer->value(text)+text.substr(label.first,label.second-label.first+1);
        }
      assert(false);
    }

    int children_count()const{ return children.size(); }
    node& child(int n){ return *std::get<1>(children[n]); }

    std::pair<int,int> child_label(int n){ return std::get<2>(children[n]); }

    char child_start(int n)const{ return std::get<0>(children[n]); }

    std::pair<int,int> child_label(char child_start){
      for(int i=0;i<children.size();i++)
        if(std::get<0>(children[i])==child_start)
          return std::get<2>(children[i]);
    }

    bool has_child(char child_start)const{
      for(int i=0;i<children.size();i++)
        if(std::get<0>(children[i])==child_start)
          return true;
      return false;
    }

    node& child(char child_start){
      for(int i=0;i<children.size();i++)
        if(std::get<0>(children[i])==child_start)
          return *std::get<1>(children[i]);
    }

    int occurances()const{
      return occurances_;
    }

    int determine_occurances(set<node*>& possible_nodes){
      occurances_=0;
      std::sort(children.begin(),children.end(),child_compare);
      for(int i=0;i<children.size();i++)
        occurances_+=child(i).determine_occurances(possible_nodes);
      if(occurances_==0)
        occurances_=1;
      if(occurances_>=3 && has_child('$') && parent_pointer!=this)
        possible_nodes.insert(this);
      return occurances_;
    }

    int compute_suffix_array(const std::string& text,std::vector<int>& suffix_array,int next_index,int depth){
      if(children.size()==0){
        suffix_array[next_index++]=text.size()-depth;
        return next_index;
      }
      for(int i=0;i<children.size();i++){
        std::pair<int,int> label=child_label(i);
        int more_depth=label.second-label.first+1;
        if(label.second==infinity)
          more_depth=text.size()-label.first;
        next_index=child(i).compute_suffix_array(text,suffix_array,next_index,depth+more_depth);
      }
      return next_index;
    }
  };

  std::pair<bool,node*> test_and_split(std::pair<node*,std::pair<int,int>> point,char next_char,char point_start){
    node& n=*point.first;
    std::pair<int,int> point_label=point.second;
    if(point_label.second<point_label.first)
      return std::make_pair(n.has_child(next_char),&n);

    assert(n.has_child(point_start));
    std::pair<int,int> child_label=n.child_label(point_start);

    int next_char_index=point_label.second-point_label.first+1;
    assert(child_label.second-child_label.first>=next_char_index);

    if(text[child_label.first+next_char_index]==next_char)
      return std::make_pair(true,&n);

    node& split_node=split(n,point_start,child_label.first+next_char_index);
    return std::make_pair(false,&split_node);
  }

  node& split(node& parent,char child_start,int next_char_index){
    std::pair<int,int> child_label=parent.child_label(child_start);
    node& grand_child=parent.child(child_start);

    node* middle=new node(&parent);
    middle->add_child(text[next_char_index],&grand_child,std::make_pair(next_char_index,child_label.second));
    parent.replace_child(child_start,middle,std::make_pair(child_label.first,next_char_index-1));
    grand_child.replace_parent(*middle);

    return *middle;
  }

  std::pair<node*,std::pair<int,int>> cannonize(std::pair<node*,std::pair<int,int>> point){
    std::pair<int,int> point_label=point.second;
    if(point_label.second<point_label.first)
      return point;

    node* n=point.first;
    std::pair<int,int> child_label=n->child_label(text[point_label.first]);
    while(child_label.second-child_label.first<=point_label.second-point_label.first){
      n=&n->child(text[point_label.first]);
      point_label.first+=child_label.second-child_label.first+1;
      auto updated_point=std::make_pair(n,point_label);

      if(point_label.first<=point_label.second)
        child_label=n->child_label(text[point_label.first]);
    }
    auto result=std::make_pair(n,point_label);
    return result;
  }

  std::pair<node*,std::pair<int,int>> update(const int next_index,std::pair<node*,std::pair<int,int>> active_point){
    const char next_char=text[next_index];
    assert(next_index==active_point.second.second+1);
    node* old_r=root;
    std::pair<bool,node*> test_result=test_and_split(active_point,next_char,text[active_point.second.first]);
    while(!test_result.first){
      node* r=test_result.second;
      node* r_prime=new node(r);
      r->add_child(next_char,r_prime,std::make_pair(next_index,infinity));

      if(old_r!=root)
        old_r->set_suffix_link(*r);

      old_r=r;
      assert(active_point.first->suffix_link());

      std::pair<node*,std::pair<int,int>> next_point(active_point.first->suffix_link(),active_point.second);
      active_point=cannonize(next_point);

      test_result=test_and_split(active_point,next_char,text[active_point.second.first]);
    }

    if(old_r!=root)
      old_r->set_suffix_link(*active_point.first);

    return active_point;
  }

  void print()const{
    std::cout<<"-------------------------------------------------\n";
    print(*root,0,"");
    std::cout<<"-------------------------------------------------\n";
  }

  void print(std::string label,std::pair<node*,std::pair<int,int>> point){
      std::cout<<label<<point.first->id()<<' '<<point.second.first<<','<<point.second.second<<" '"<<text.substr(point.second.first,point.second.second-point.second.first+1)<<"'\n";
  }

  void print(node& n,int indent,const std::string& label)const{
    node* sl=n.suffix_link();
    std::cout<<std::string(indent,' ')<<'"'<<label<<"\" '"<<n.value(text)<<"' "<<n.id()<<" -> "<<(sl?sl->id():-1)<<'\n';
    for(int i=0;i<n.children_count();i++){
      std::pair<int,int> child_label=n.child_label(i);
      std::cout<<std::string(2+indent,' ')<<n.child_start(i)<<' '<<child_label.first<<','<<child_label.second<<'\n';
      std::string next_label=label+text.substr(child_label.first,std::min(child_label.second,build_index)-child_label.first+1);
      print(n.child(i),indent+2,next_label);
    }
  }
};

int suffix_tree::node::count=0;

int main(){
  string s;
  cin>>s;
  suffix_tree tree(s);
  cout<<tree.answer()<<'\n';
}
