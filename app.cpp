#include<bits/stdc++.h>
#include <unistd.h>
#include"game.h"

using namespace std;

int main(){
    int w, h; cin>>w>>h;
    Snake S(w, h);
    while(!S.isOver()){
        S.Draw();
        S.Input();
        S.Logic();
        usleep(1e5);
    }
    
    return 0;
}