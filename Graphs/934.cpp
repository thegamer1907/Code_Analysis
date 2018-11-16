#include<iostream>

using namespace std;

class CellTransport
{
    public:
        int numCells;
        int targetCell;

        int *portals;

        void readInput()
        {
            cin>>numCells>>targetCell;
            portals = new int[numCells];
            for(int i=0;i<numCells-1;i++)
            {
                cin>>portals[i];
            }
        }
        void checkReachable()
        {
            int i=0;
            int cellNo = 1;
            while(cellNo<=numCells)
            {
                if(cellNo==targetCell)
                {
                    cout<<"YES";
                    return;
                }
                if(cellNo<numCells)
                {
                    cellNo = cellNo+portals[cellNo-1];
                }
                else
                {
                    cout<<"NO";
                    return;
                }

            }
        }
};

int main()
{
    CellTransport cell;
    cell.readInput();
    cell.checkReachable();
}
