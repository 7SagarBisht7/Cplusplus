#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "Code of this item is : " << id << endl;
        cout << "Price of this item is : " << price << endl;
    }
};


int main(){
    int size=3;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *temp = ptr;
    int p;
    float q;
    for (int i=0; i<size; i++){
        cout << "Enter the id and price of item"<<i+1<<endl;
        cin >> p>> q;
        ptr->setData(p,q);
        ptr++;
    } 

    for (int j=0; j<size; j++){
        cout << "ITEM : "<<j+1<<endl;
        temp->getData();
        temp++;
    } 

    return 0;
}