#include <iostream>
#include <cstdlib>
#include <vector>
#include <string.h>
#include <map>

#include <stdio.h>
using  namespace std;

int main() {
    char newTitle[81],data[81],dss[81];
    char neworder[81];
    vector<string> vchar;
    vector<int> vint;
    char* names;
    char* order,*datas;


    cin.getline(newTitle,81,'\n');
    names=strtok(newTitle,",");
    while (names != NULL)
    {
     //  cout<<names<<endl;
        vchar.push_back(names);
        names=strtok (NULL, ",");

    }

    cin.getline(neworder,81,'\n');
    order=strtok(neworder,",");
    while (order != NULL)
    {
      //  printf ("%s\n",order);
      //  cout<<order<<endl;
        vint.push_back(atoi(order));
        order=strtok (NULL, ",");

    }

//
    map<int,string> m;
    for(int i=0;i<vchar.size();i++){
        m.insert(make_pair(vint.at(i),vchar.at(i)));
    }

    //remove key=0
    string title="";
    map<int, string>::iterator iter;
    for(iter=m.begin();iter!=m.end();iter++){
        if(iter->first>0){
           title=title+iter->second+",";
        }
    }
    title.pop_back();
    cout<<title<<endl;

    cin.getline(dss,81,'\n');
    while(cin.getline(data,81,'\n')){
        vector<string> vc;
        string datastr="";
        datas=strtok(data,",");
        while (datas != NULL)
        {
            //cout<<datas<<endl;
            vc.push_back(datas);
            datas=strtok (NULL, ",");//++point
        }
        map<int,string> m;
        for(int i=0;i<vc.size();i++){
            m.insert(make_pair(vint.at(i),vc.at(i)));
        }

        for(iter=m.begin();iter!=m.end();iter++){
            if(iter->first>0){
                datastr+=iter->second+",";
            }
        }
        datastr.pop_back();
        cout<<datastr<<endl;

    }





}