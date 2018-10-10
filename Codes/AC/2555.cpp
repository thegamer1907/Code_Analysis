#define VERSION "0.1.4"

#include <cassert>
#include <cstdio>
#include <algorithm>

/** Fast allocation */

#ifdef FAST_ALLOCATOR_MEMORY
  int allocator_pos = 0;
  char allocator_memory[(int)FAST_ALLOCATOR_MEMORY];
  inline void * operator new ( size_t n ) {
    char *res = allocator_memory + allocator_pos;
    allocator_pos += n;
    assert(allocator_pos <= (int)FAST_ALLOCATOR_MEMORY);
    return (void *)res;
  }
  inline void operator delete ( void * ) noexcept { }
  //inline void * operator new [] ( size_t ) { assert(0); }
  //inline void operator delete [] ( void * ) { assert(0); }
#endif

/** Fast input-output */

template <class T = int> inline T readInt();            
inline double readDouble();
inline int readUInt();           
inline int readChar(); // first non-blank character
inline void readWord( char *s ); 
inline bool readLine( char *s ); // do not save '\n'
inline bool isEof();
inline int getChar(); 
inline int peekChar();
inline bool seekEof();
inline void skipBlanks();

template <class T> inline void writeInt( T x, char end = 0, int len = -1 );
inline void writeChar( int x ); 
inline void writeWord( const char *s );
inline void writeDouble( double x, int len = 0 );
inline void flush();

static struct buffer_flusher_t {
  ~buffer_flusher_t() {
    flush();
  }
} buffer_flusher;

/** Read */

static const int buf_size = 4096;

static unsigned char buf[buf_size];
static int buf_len = 0, buf_pos = 0;

inline bool isEof() {
  if (buf_pos == buf_len) {
    buf_pos = 0, buf_len = fread(buf, 1, buf_size, stdin);
    if (buf_pos == buf_len)
      return 1;
  }
  return 0;
}

inline int getChar() { 
  return isEof() ? -1 : buf[buf_pos++];
}

inline int peekChar() { 
  return isEof() ? -1 : buf[buf_pos];
}

inline bool seekEof() { 
  int c;
  while ((c = peekChar()) != -1 && c <= 32)
    buf_pos++;
  return c == -1;
}

inline void skipBlanks() {
  while (!isEof() && buf[buf_pos] <= 32U)
    buf_pos++;
}

inline int readChar() {
  int c = getChar();
  while (c != -1 && c <= 32)
    c = getChar();
  return c;
}

inline int readUInt() {
  int c = readChar(), x = 0;
  while ('0' <= c && c <= '9')
    x = x * 10 + c - '0', c = getChar();
  return x;
}

template <class T>
inline T readInt() {
  int s = 1, c = readChar();
  T x = 0;
  if (c == '-')
    s = -1, c = getChar();
  else if (c == '+')
    c = getChar();
  while ('0' <= c && c <= '9')
    x = x * 10 + c - '0', c = getChar();
  return s == 1 ? x : -x;
}

inline double readDouble() {
  int s = 1, c = readChar();
  double x = 0;
  if (c == '-')
    s = -1, c = getChar();
  while ('0' <= c && c <= '9')
    x = x * 10 + c - '0', c = getChar();
  if (c == '.') {
    c = getChar();
    double coef = 1;
    while ('0' <= c && c <= '9')
      x += (c - '0') * (coef *= 1e-1), c = getChar();
  }
  return s == 1 ? x : -x;
}

inline void readWord( char *s ) { 
  int c = readChar();
  while (c > 32)
    *s++ = c, c = getChar();
  *s = 0;
}

inline bool readLine( char *s ) { 
  int c = getChar();
  while (c != '\n' && c != -1)
    *s++ = c, c = getChar();
  *s = 0;
  return c != -1;
}

/** Write */

static int write_buf_pos = 0;
static char write_buf[buf_size];

inline void writeChar( int x ) {
  if (write_buf_pos == buf_size)
    fwrite(write_buf, 1, buf_size, stdout), write_buf_pos = 0;
  write_buf[write_buf_pos++] = x;
}

inline void flush() {
  if (write_buf_pos)
    fwrite(write_buf, 1, write_buf_pos, stdout), write_buf_pos = 0;
}

template <class T> 
inline void writeInt( T x, char end, int output_len ) {
  if (x < 0)
    writeChar('-'), x = -x;

  char s[24];
  int n = 0;
  while (x || !n)
    s[n++] = '0' + x % 10, x /= 10;
  while (n < output_len)
    s[n++] = '0';
  while (n--)
    writeChar(s[n]);
  if (end)
    writeChar(end);
}

inline void writeWord( const char *s ) {
  while (*s)
    writeChar(*s++);
}

inline void writeDouble( double x, int output_len ) {
  if (x < 0)
    writeChar('-'), x = -x;
  int t = (int)x;
  writeInt(t), x -= t;
  writeChar('.');
  for (int i = output_len - 1; i > 0; i--) {
    x *= 10;
    t = std::min(9, (int)x);
    writeChar('0' + t), x -= t;
  }
  x *= 10;
  t = std::min(9, (int)(x + 0.5));
  writeChar('0' + t);
}


# include <bits/stdc++.h>
/// my holy template
# define F first    
# define S second
# define mp make_pair
# define pii pair<int,int>         
/// eveything goes according to plan
# define long long long  
# define pb push_back
# define sz(a) (int)(a.size())

# define y1    tipa_y1
# define left  tipa_left
# define right tipa_right     

const int Mod = (int)1e9 + 7;
const int MX = 1073741822;
const long MXLL = 9223372036854775807;
const int Sz = 1e7 + 1;

using namespace std;

inline void Read_rap () {
  ios_base :: sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
}
inline void randomizer3000 () {
  unsigned int seed;
  asm("rdtsc" : "=A"(seed));
  srand(seed);
}
int cnt[Sz], f[Sz];

vector <int> pr;
vector <long> pref;

int lp[Sz];

inline void Sieve (const int N) {
  pr.pb (0);
  pref.pb (0);
  for (int i = 2;i <= N;i ++)
  {
    if (!lp[i]) {
      lp[i] = i;
      pr.pb (i);   
      for (int j = i;j <= N;j += i)
        f[i] += cnt[j];
      pref.pb (pref.back() + f[i]);
    }
    for (int j = 1;j < sz(pr) && pr[j] <= lp[i] && i * pr[j] <= N;j ++)
      lp[pr[j] * i] = pr[j];
  } 
}             
                              
int main() 
{
  int n = readInt();
  for (int i = 1;i <= n;i ++) {
    int x = readInt();
    cnt[x] ++;
  }                     
  Sieve(Sz-1);
  int m = readInt();

  while (m --)
  {
    int l = readInt(), r = readInt();                
    r = min (r, pr.back());
    l = min (l, pr.back() + 1);

    r = --upper_bound (pr.begin(), pr.end(), r) - pr.begin();
    l = --lower_bound (pr.begin(), pr.end(), l) - pr.begin();
    assert (l <= r);
    writeInt (pref[r] - pref[l], '\n');
  }

  return 0;
} 
                     









// Coded by Z...