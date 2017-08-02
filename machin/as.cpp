#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
using namespace std;
int numbers_after_decimal_point(string x)
    {
        return x.substr(x.find('.')+1,x.length()-1).length();
    }
    
int roundOff(float num){
    int result;
    if( (num + 0.5) >= (int(num) + 1) ){
     result= int(num)+1;
    } else {
     result=int(num);
    }
    return result;
}
 
int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
     long int tc;
    cin >> tc;
    int k;
    float t;
    char array1[tc];
    string array2[tc];
    float array3[tc];
    float array4[tc];
    for(int a=0;a<tc;a++){
        char sq;
        string day;
        float prod;
        float stat;
        cin >> sq >> day >> prod >> stat;
        array1[a] = sq;
        array2[a] = day;
        array3[a] = prod;
        array4[a] = stat;
        
    }
    //int i =0;
    int z =0;
    int count[tc];
    for (int i=0;i<tc;i++){
    if(array1[i]=='Q'){
        
        count[z]=0;
        for(int j=0; j<i; j++)
        {   if(array1[j]=='S'){
                if (floorf(stof(array2[i])) == stof(array2[i])){
                    if(stof(array2[i]) == stof(array2[j])){
                        if(array3[i] == -1.0){
                            if(array4[i] == -1.0){
                                count[z] = count[z]+1;
                            } else if(floorf(array4[i]) == array4[i]){
                                     if(array4[i] == floor(array4[j]))
                                         count[z] = count[z]+1;
                            }
                            else if(array4[i] == (array4[j])){
                                        count[z] = count[z]+1;
                            }
                        }
                        else if(floorf(array3[i]) == array3[i]){
                            if(array3[i] == floor(array3[j])){
                                if(array4[i] == -1.0){
                                    count[z] = count[z]+1;
                            } else if(floorf(array4[i]) == array4[i]){
                                     if(array4[i] == floor(array4[j]))
                                         count[z] = count[z]+1;
                            } else if(array4[i] == (array4[j])){
                                        count[z] = count[z]+1;
                                    }
                            }
                        } else if(array3[i] == (array3[j])){
                                if(array4[i] == -1.0){
                                    count[z] = count[z]+1;
                                } else if(floorf(array4[i]) == array4[i]){
                                     if(array4[i] == floor(array4[j]))
                                         count[z] = count[z]+1;
                                } else if(array4[i] == (array4[j])){
                                        count[z] = count[z]+1;
                                }
                            }
                    }
                }
                else {
                    k = numbers_after_decimal_point(array2[i]);
                    t = roundOff((stof(array2[i])*pow(10,k)) - (floor(stof(array2[i]))*pow(10,k)));
                    if(floor(stof(array2[i])) <= stof(array2[j]) && stof(array2[j]) <= t){
                         if(array3[i] == -1.0){
                            if(array4[i] == -1.0){
                                count[z] = count[z]+1;
                            } else if(floorf(array4[i]) == array4[i]){
                                     if(array4[i] == floor(array4[j]))
                                         count[z] = count[z]+1;
                            } else if(array4[i] == (array4[j])){
                                        count[z] = count[z]+1;
                            }
                        } else if(floorf(array3[i]) == array3[i]){
                            if(array3[i] == floor(array3[j])){
                                if(array4[i] == -1.0){
                                    count[z] = count[z]+1;
                                }else if(floorf(array4[i]) == array4[i]){
                                     if(array4[i] == floor(array4[j]))
                                         count[z] = count[z]+1;
                                } else if(array4[i] == (array4[j])){
                                        count[z] = count[z]+1;
                                }
                            }
                        } else if(array3[i] == (array3[j])){
                                if(array4[i] == -1.0){
                                    count[z] = count[z]+1;
                                } else if(floorf(array4[i]) == array4[i]){
                                     if(array4[i] == floor(array4[j])){
                                         count[z] = count[z]+1;
                                     }
                                } else if(array4[i] == (array4[j])){
                                        count[z] = count[z]+1;
                                }
                        }
                    }
                }
         }            
        }
        //i++;
        z++;
    }
    }
    //cout<<z;
    for(int i =0; i< z ; i++){
        cout << count[i]<< endl;
    } 
    
    //cout<< "hi"<<roundOff((stof("4.1")*pow(10,1)) - (floor(stof("4.1"))*pow(10,1)));
    return 0;
}
 