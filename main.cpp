#include <iostream>
using namespace std;


int main() {
    // TODO: read secret from environment variable
    // char* DERIBIT_API_KEY = getenv("DERIBIT_API_KEY"); 
    string DERIBIT_API_KEY = "";
    
    int choice;
    cout<<"1. Place order\n"
        <<"2. Cancel order\n"
        <<"3. Modify order\n"
        <<"4. Get orderbook\n"
        <<"5. View current positions\n";

    cout<<"Enter the operation you want to perform: \n";
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<"Place order\n";
        break;
    case 2:
        cout<<"Cancel order\n";
        break;
    case 3:
        cout<<"Modify order\n";
        break;
    case 4:
        cout<<"Get orderbook\n";
        break;
    case 5:
        cout<<"View current positions\n";
        break;
    default:
        cout<<"Invalid choice\n";
        break;
    }

    return 0;
}