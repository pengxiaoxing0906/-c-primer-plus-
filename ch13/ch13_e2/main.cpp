#include <iostream>
#include "brass.h"
int main() {
    using std::cout;
    using std::endl;

    Brass Piggy("Porcelot Pigg",3812,4000.00);
    BrassPlus Hoggy("Horatio Hogg",3822,3000.00);
    Piggy.ViewAcct();
    cout<<endl;
    Hoggy.ViewAcct();
    cout<<endl;
    cout<<"depositing $1000 into the Hogg Account:\n";
    Hoggy.Deposit(1000.00);
    cout<<"new balance:$"<<Hoggy.Balance()<<endl;
    cout<<"withdraw $4200 from the Pigg Account:\n";
    Piggy.Withdraw(4200.00);
    cout<<"Pigg account balance:$"<<Piggy.Balance()<<endl;
    cout<<"Withdrawing $4200 from the Hogg Account:\n";
    Hoggy.Withdraw(4200.00);
    Hoggy.ViewAcct();
    return 0;
}