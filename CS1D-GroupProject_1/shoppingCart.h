//#ifndef SHOPPINGCART_H
//#define	SHOPPINGCART_H
//
//#include <string>
//#include <iostream>
//#include <iomanip>
//#include <sstream>
//
//using namespace std;
//
//class shoppingCart
//{
//private:
//    float  total;
//    string out;
//
//public:
//    shoppingCart();
//    ~shoppingCart();
//    void Add(float purchase);
//    void UpdateOutput(string wine, float purchase, int amount);
//    string GetOutput();
//};
//
//shoppingCart::shoppingCart()
//{
//    total  = 0;
//    out    = " #   Purchase   Cost \n"
//             "--- ---------- ------\n";
//}
//
//shoppingCart::~shoppingCart()
//{}
//
//void shoppingCart::Add(float purchase)
//{
//    total += purchase;
//}
//
//void shoppingCart::UpdateOutput(string wine, float purchase, int amount)
//{
//    ostringstream update = out;
//
//    update << left << setw(3) << amount << "\s\s" << setw(9) << wine
//           << "\s\s" << setw(6) << purchase*amount << endl;
//    Add(purchase*amount);
//    out = update;
//}
//
//string shoppingCart::GetOutput()
//{
//     ostringstream update = out;
//     update << "---------------------\n"
//            << "Total: $ " << total;
//     out = update;
//     return out;
//}
//#endif	/* SHOPPINGCART_H */
//
