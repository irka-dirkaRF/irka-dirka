#include <iostream> 

#include <stdio.h>//sprintf dlia perevoda chisla v char [] 

#include <string>//chtobi soediniat stroki plusom 

using namespace std; 



struct Shot {//xranit imena broska i kol-vo ballov za sootvetstvyushii brosok 

string name; 

int scores; 

}; 

Shot* shots; 

void quickSortShots(int l, int r){ 

int x = shots[l + (r - l) / 2].scores; 

int i = l; 

int j = r; 

while(i <= j) 

{ 

while(shots[i].scores < x) i++; 

while(shots[j].scores > x) j--; 

if(i <= j) 

{ 

swap(shots[i], shots[j]); 

i++; 

j--; 

} 

} 

if (i<r) 

quickSortShots(i, r); 



if (l<j) 

quickSortShots(l, j); 

} 



void initShot(){ 

shots = new Shot[63]; //all varianty broskov 

string T="T",D="D",bull="Bull"; 

char zz[3]; //dlia preobrazovania chisla v const char* i dobavlenia v stroky 

int i=0; 



for (int j =0; j <= 20; j++) 

{ 

shots[i].scores= j; 

sprintf(zz, "%d", j); 

shots[i].name = (const char*)zz; 

i++; 

} 

for (int j = 1; j <= 20; j++) 

{ 

shots[i].scores= j*2; 

sprintf(zz, "%d", j); 

shots[i].name = D+(const char*)zz; 

i++; 

} 

for (int j = 1; j <= 20; j++) 

{ 

shots[i].scores= j*3; 

sprintf(zz, "%d", j); 

shots[i].name = T+(const char*)zz; 

i++; 

} 

shots[i].scores= 25; 

sprintf(zz, "%d", 25); 

shots[i].name = (const char*)zz; 

i++; 

shots[i].scores= 50; 

shots[i].name = bull; 



quickSortShots(0, 62); 

} 



void AddAnswear(string*&res,string record,int &count){ 

bool wasntDup=true; 

for (int i=0;i<count;i++) 

if ((res[i]==record)){ 

wasntDup=false; 

break; 

} 

if (wasntDup==true){ 

string* temp=new string[count+1]; 

for (int i=0;i<count;i++) 

temp[i]=res[i]; 

temp[count]=record; 

delete[]res; 

res=temp; 

count++; 

} 

} 



void darts_game(int n) { 

int max=50+60+60; 

if (n>max || n<2) { 

cout«0; 

return; //no reshenii 

} 

initShot(); 

string * res=new string[0]; 

int count=0; 

string answ=""; 



for (int i = 0; i <= 62 && shots[i].scores <= n; i++)// perebor vsex kombinatsii po 3 slagaemim (s 0) 

for (int j = 0; j <= 62 && shots[j].scores <= n; j++) 

for (int k = 0; k <= 62 && shots[k].scores <= n; k++) 

if (shots[i].scores + shots[j].scores + shots[k].scores == n && (shots[k].name[0]=='D'||shots[k].name=="Bull")) 

{ 

answ=""; 

if (shots[i].scores>0) answ+=shots[i].name+" "; 

if (shots[j].scores>0) answ+=shots[j].name+" "; 

answ += shots[k].name; 

AddAnswear(res,answ,count); 

} 

//vivod 

cout«count«endl; //olichestvo reshenii 

for (int i=0;i<count;i++) 

cout«res[i]«endl; 

delete[]shots; 

delete[]res; 

} 

int main() 

{ 

int n; 

cin»n; 

darts_game(n); 



} 
