//
//  Invoice.h
//  3.10 Invoice class
//
//  Created by ben haywood on 6/22/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#ifndef Invoice_h
#define Invoice_h
#include <string>


class Invoice {
private:
    
    std::string partNumber;
    std::string partDescription;
    int quantityPurchased;
    int pricePreItem;
    
    
    //==========================================================
    
public:
    Invoice(std::string pNumber, std::string pDescription, int quantity, int price4Items)
    {
        partNumber = pNumber;
        partDescription = pDescription;
        
        if (quantity < 0)
            quantityPurchased = 0;
        else
            quantityPurchased = quantity;
        
        if (price4Items < 0)
            pricePreItem = 0;
        else
            pricePreItem = price4Items;
    }
    //===============================================================
    
    void setPartNumber(std::string set)
    {
        partNumber = set;
        
    }
    
    std::string getPartNumber() const
    {
        return partNumber;
    }
    
    //================================================================
    
    void setPartDescription(std::string set)
    {
        partDescription = set;
    }
    
    std::string getPartDescription() const
    {
        return partDescription;
    }
    //===================================================================
    
    void setQuantityPurchased(int set)
    {
        
        if (set < 0)
            quantityPurchased = 0;
        else
            quantityPurchased = set;
    }
    
    int getQuantityPurchased() const
    {
        return quantityPurchased;
        
    }
    //===================================================================
    
    void setPricePreItem(int set)
    {
        if (set < 0)
            pricePreItem = 0;
        else
            pricePreItem = set;
    }
    
    int getPricePreItem() const
    {
        return pricePreItem;
    }
    //====================================================================
    int getInvoiceAmount()
    {
        return pricePreItem * quantityPurchased;
    }

}; // end class invoice

#endif /* Invoice_h */
