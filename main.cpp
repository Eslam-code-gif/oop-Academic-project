/*
! ----------------------------------------------------------------
* Copyright (Abdel Rahem mohamed) 2024
* All rights reserved.
*code 623177
! AAAAAAAAAAAAAAAAA   SSSSSSSSSSSSSSS   LLLLLL              AAAAAAAAAAAAAAAAA   MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
! AAAAAAAAAAAAAAAAA   SSSSSSSSSSSSSSS   LLLLLL              AAAAAAAAAAAAAAAAA   MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
! AAA         AAA     SSS                LLL                AAA         AAA     MMMMMMMMMM            MMMMMMMMMM
* AAA         AAA     SSS                LLL                AAA         AAA     MMMMMMMMMM            MMMMMMMMMM
* AAAAAAAAAAAAAAAAA   SSSSSSSSSSSSS      LLL                AAAAAAAAAAAAAAAAA   MMMMMMMM  MM        MM  MMMMMMMM
? AAAAAAAAAAAAAAAAA   SSSSSSSSSSSSS      LLL                AAAAAAAAAAAAAAAAA   MMMMMMMM   MM      MM   MMMMMMMM
? AAA         AAA     SSS                 LLL               AAA         AAA     MMMMMMMM    MM    MM    MMMMMMMM
! AAA         AAA     SSS                 LLL               AAA         AAA     MMMMMMMM     MM  MM     MMMMMMMM
! AAAAAAAAAAAAAAAAA   SSSSSSSSSSSSSSS    LLLLLLLLLLLLLLLLL  AAA         AAA     MMMMMMMM      MMMM      MMMMMMMM
! AAAAAAAAAAAAAAAAA   SSSSSSSSSSSSSSS    LLLLLLLLLLLLLLLLL  AAA         AAA     MMMMMMMM      MMMM      MMMMMMMM
*/

#include <iostream>
#include <vector>
#include "DomesticFlight.h"
#include "InternationalFlight.h"

using namespace std;

int main()
{ 
    /*
    !example
    //? ��نشا�� قا��مة الرحلات
    */
    // إنشاء قائمة الرحلات
    vector<Flight *> flights;

    // إنشاء رحلات محلية ودولية
    Flight *domesticFlight = new DomesticFlight(101, "Cairo", "Alexandria", "2024-12-25", 50, 500.0, 50.0);
    Flight *internationalFlight = new InternationalFlight(102, "Cairo", "Dubai", "2024-12-30", 30, 1500.0, true);

    // إضافة الرحلات إلى القائمة
    flights.push_back(domesticFlight);
    flights.push_back(internationalFlight);

    // عرض تفاصيل الرحلات
    cout << "--- Flight Details ---\n";
    for (const auto &flight : flights)
    {
        flight->getDetails(); // استدعاء دالة getDetails لكل نوع
        cout << "----------------------\n";
    }

    // تحرير الذاكرة
    for (auto &flight : flights)
    {
        delete flight;
    }

    return 0;
}

/*
? +------------------------------+
? |          E S L A M           |
? +------------------------------+


*/
