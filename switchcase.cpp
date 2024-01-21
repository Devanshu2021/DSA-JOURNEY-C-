 #include <iostream>
using namespace std;
int main(){
    char button;
    cout<<"enter the charc";
    cin>>button;

    if(button=='a'){
        cout<<"hello";
    }else if(button=='b'){
        cout<<"namnste";
    }else if(button=='c'){
        cout<<"okay";
    }else{
        cout<<"iam still learing";
    }
}

 switch (button)
 {
 case 'a':
 cout<<"this is okay";
    break;
    case 'b':
 cout<<"this is totally okay";
    break;
    case 'c':
 cout<<"this is fine okay";
    break;
    case 'e':
 cout<<"this theek theek is okay";
    break;

 
 default:
 cout<<"iam still learning";
    break;
 }
}