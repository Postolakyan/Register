#include "head.hpp"
void login(){          
        Register user;                  //creates an object in the Register class
        string l,pass,conf,j;
        cout<<"Please Insert the Login"<<endl; cin>>l;
        user.setusername(l);
        cout<<"Please Insert the Password"<<endl; cin>>pass;
        user.setpassword(pass);
        cout<<"Please Confirm the Password"<<endl; cin>>conf;
        ifstream myfile;
        j=l+".txt";
        myfile.open(j);                                  
        if(myfile.fail()){                       //checks the availability of the file
            cerr<<"Error: could not be found";
            exit(1);
        }
        if(conf==pass){
            cout<<"You have successfully entered a progam"<<endl;
        }
            else{
                cout<<"The Login or Password is wrong"<<endl;
            }
    }
    void registracia(){
        Register nwuser;
        string u,p,r,t;
        cout<<"Please insert the username"<<endl; cin>>u;
        nwuser.setusername(u);
        cout<<"Please Create the Password"<<endl; cin>>p;
        cout<<"Please repeat the Password"<<endl; cin>>r;
        nwuser.setpassword(r);
        ofstream fout;
        t=u+".txt";
        fout.open(t);                                     //creates a file with the name of the imported login


        fout<<"The login = "+u+"\n The Password= "+p;
        fout.close();
        if(r==p){
            cout<<"The account is created"<<endl;
        }
    }

    void start(){
        int c;
            cout<<"Please choose login-1 or register-2"<<endl; cin>>c;
        if(c==1){
            login();
        }
        else if(c==2) {
           registracia();
        }
            else{
                cout<<"Command not found"<<endl;
            }
    }


