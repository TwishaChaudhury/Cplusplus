#include<bits/stdc++.h>
using namespace std;
int main()
{

    while(1)
    {
        queue<int> cards;
        int n;

        scanf("%d",&n);
        if(n == 0)
        {
            break;
        }

        for(int i = 1; i <= n; i++)
        {
            cards.push(i);
        }

        printf("Discarded cards : \n");
        while(cards.size() != 1)
        {
            if(cards.size() != 2) {printf("%d, ", cards.front());}
            else {printf("%d\n", cards.front());}
            cards.pop();
            cards.push(cards.front());
            cards.pop();
        }
        printf("Remaining card :  %d\n\n",cards.front());
    }
    return 0;
}
