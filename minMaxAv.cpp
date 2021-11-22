
/**************************************************
// Författare: Aman Arabzadeh
// Datum 2021-11-22
// Introduktion till programmering / Datateknik 
// Laboration 1 -  Iteration och aritmatik 

// Detta program utför aritmatiska operationer ur värderna båda i filen  och tangentsbordet, values.txt
// Räknar max- min och och medelvärdet 
 
 *************************************************/
#include <iostream>
#include <climits>

int main(){

    int count = 0; 
    int sum = 0;
    int num;
    int max_value = INT_MIN;
    int min_value = INT_MAX ;
    double average;

    

    while(std::cin >> num){
      
 
      // std::cout << num << std::endl;
        if(max_value < num) 
            max_value = num;
         
        if (min_value > num)  
             min_value = num;  
        
        sum += num; // sum = sum + num;
        count++;
    }
     
    average = static_cast<double>(sum) / static_cast<double>(count); 
    std::cout << "Summan: " << sum << std::endl;
    std::cout << "Antal: " << count << std::endl;
    std::cout << std::endl;
    std::cout << "Minvärdet är: " << min_value << std::endl;
    std::cout << "Maxvärdet är: " << max_value << std::endl;
    std::cout << "Medlelvärdet är: " << average << std::endl;
    std::cout << "--------------------------------------------" << std::endl;;
    return 0;
}