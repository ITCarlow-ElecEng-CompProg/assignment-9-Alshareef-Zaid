/**
    Zaid H Alshareef
    C00210415
    25/11/2017
    9. Sphere Calculations*/


    /**< preprocessor directives */
    #include <iostream>
    #include<cmath>

    using namespace std;



    void sphere(double rad,double v,double sarea, double *pv, double *psa);

    /**< main function */
    int main()
    {
        /**< variable declarations */

    double r,v,s;

    /**Assigning points to address*/
    double *pv, *psa;


    pv = &v;
    psa = &s;


    cout << "Sphere calculations\n" << endl;


    /**enter values for radius*/
    cout << "Enter a value for radius (m)? ";
    cin >> r ;


    while(r <= 0)
    {
    /** value for radius greater than 0*/
    cout << "Enter values for radius (m)>= 0";
    cin >> r ;
    }

    sphere(r, v, s,pv, psa);

    /**Display the results*/
    cout << "\nvolume = " << *psa<< "m3" << "\tsurface area = " << *pv <<"m2"<< endl;



    return 0;
    }


    void sphere(double rad,double v,double sarea, double *pv, double *psa)
    {
         /**equations*/
    *pv = 4* M_PI* pow(rad,2);
    *psa = (4*M_PI*pow(rad,3))/3;


    return ;
    }
