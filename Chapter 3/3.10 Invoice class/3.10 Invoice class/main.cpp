//
//  main.cpp
//  3.10 Invoice class
//
//  Created by ben haywood on 6/22/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include "Invoice.h"

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    Invoice invoice1{"1234", "screw", 10, 1};
    
    
    cout << "part number: " << invoice1.getPartNumber() << endl;
    cout << "part Description: " << invoice1.getPartDescription() << endl;
    cout << "Quantity: " << invoice1.getQuantityPurchased() << endl;
    cout << "cost pre item: " << invoice1.getPricePreItem() << endl;
    cout << "Total: " << invoice1.getInvoiceAmount() << endl;
    
    invoice1.setPartNumber("5432");
    invoice1.setPartDescription("Nail");
    invoice1.setQuantityPurchased(15);
    invoice1.setPricePreItem(-5);
    
    cout << "part number: " << invoice1.getPartNumber() << endl;
    cout << "part Description: " << invoice1.getPartDescription() << endl;
    cout << "Quantity: " << invoice1.getQuantityPurchased() << endl;
    cout << "cost pre item: " << invoice1.getPricePreItem() << endl;
    cout << "Total: " << invoice1.getInvoiceAmount() << endl;
    return 0;
}
