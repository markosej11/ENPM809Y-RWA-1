//Header files used
#include <iostream>
#include <array>
#include <vector>
#include <string.h>

using std :: cout ;
using std :: cin ;
using std :: endl ;
using std :: array ;
using std :: string ;
using std :: vector ;


int main()                      //program starts
{
   int i,j;                                                                                    //variable declaration
   string input, temp, temp2;                                       //variable declaration
   array<array<string, 2>, 3>pegs_and_tray =     //initial array declaration and initialisation
    { { { "blue", "white" },
       { "green", "white"},
       {"green", "white"} } } ;

    vector <string> color_vec1 ;
    vector <string> color_vec2 ;  //creating 3 empty vectors
    vector <string> color_vec3 ;
    color_vec1.push_back (pegs_and_tray[0][0]) ;
    color_vec1.push_back (pegs_and_tray[0][1]) ;
    color_vec2.push_back (pegs_and_tray[1][0]) ;     //movings the elements in the array to the required vectors
    color_vec2.push_back (pegs_and_tray[1][1]) ;
    color_vec3.push_back (pegs_and_tray[2][0]) ;
    color_vec3.push_back (pegs_and_tray[2][1]) ;

     cout << "Enter the missing colour in row 1 ( Blue/ White/ Green ) : "<<endl ;
     cin >> input ;                                                                                                                                                   //Taking input from user and storing it in the vector one
     color_vec1.push_back (input) ;
     
     cout << "\nEnter the missing colour in row 2 ( Blue/ White/ Green ) : "<<endl ;
     cin >> input ;
     temp = color_vec2.at(0) ;
     temp2 = color_vec2.at(1) ;                                                                                                                  //Taking input from user and storing it in the vector two
     color_vec2.at(0) = input ;
     color_vec2.at(1) = temp ;
     color_vec2.push_back (temp2) ;
     
     cout << "\nEnter the missing colour in row 3 ( Blue/ White/ Green ) : " <<endl ;
     cin >> input ;
     temp = color_vec3.at(1) ;                                                                                                                       //Taking input from user and storing it in the vector three
     color_vec3.at(1) = input ;
     color_vec3.push_back (temp) ;

     cout << "\nVector 1 : " << color_vec1.at(0) << " " << color_vec1.at(1) << " " << color_vec1.at(2) <<endl ;
     cout << "Vector 2 : " << color_vec2.at(0) << " " << color_vec2.at(1) << " " << color_vec2.at(2) <<endl ;      //displaying the values stored in each vector
     cout << "Vector 3 : " << color_vec3.at(0) << " " << color_vec3.at(1) << " " << color_vec3.at(2) <<endl ;
     
     vector<vector <string> > color_vec_2d {  {"black", "black", "black"},
                                                                                           {"black", "black", "black"},       //creating a 2D vector and initialising it to store the value black
                                                                                           {"black", "black", "black"} } ;
     
     
     color_vec_2d.at(0).at(0) = color_vec1.at(0) ;
     color_vec_2d.at(0).at(1) = color_vec1.at(1) ;
     color_vec_2d.at(0).at(2) = color_vec1.at(2) ;
     color_vec_2d.at(1).at(0) = color_vec2.at(0) ;          //copying the elements of 1D vectors  to the 2D vector
     color_vec_2d.at(1).at(1) = color_vec2.at(1) ;
     color_vec_2d.at(1).at(2) = color_vec2.at(2) ;
     color_vec_2d.at(2).at(0) = color_vec3.at(0) ;
     color_vec_2d.at(2).at(1) = color_vec3.at(1) ;
     color_vec_2d.at(2).at(2) = color_vec3.at(2) ;
     
     cout << "\nThe elements in the 2D vector are : " << endl ;
      for( i=0 ; i<3; i++ )
     {
         for( j=0 ; j<3 ; j++ )
         {
             cout << color_vec_2d.at(i).at(j) << "  " ;            //Displaying the elements of the 2D vector
         }
         cout << endl ;
     }
     cout << "\nThe size of color_vec_2d vector is : " ; 
     cout << color_vec_2d.size() << endl ;                              //Displaying the size of the 2D vector
	return 0 ;
}
