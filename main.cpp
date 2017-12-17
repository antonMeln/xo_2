# xo_2
#include <iostream>
#include <sstream>
using namespace std;

void table (char xo[25]) {
  
  cout << "    1    2    3    4    5\n" 
       << "   +---+---+---+---+---+\n "
       << "a | " << xo[0] << " | " << xo[1] << " | " << xo[2] <<" | "<< xo[3] << " | "<< xo[4]<< " |\n"
       << "   +---+---+---+---+---+\n "
       << "b | " << xo[5] << " | " << xo[6] << " | " << xo[7] <<" | "<< xo[8] << " | "<< xo[9]<< " |\n"
       << "   +---+---+---+---+---+\n "
       << "c | " << xo[10] << " | " << xo[11] << " | " << xo[12] <<" | "<< xo[13] << " | "<< xo[14]<< " |\n"
       << "   +---+---+---+---+---+\n "
       << "d | " << xo[15] << " | " << xo[16] << " | " << xo[17] <<" | "<< xo[18] << " | "<< xo[19]<< " |\n"
       << "   +---+---+---+---+---+\n "
       << "e | " << xo[20] << " | " << xo[21] << " | " << xo[22] <<" | "<< xo[23] << " | "<< xo[24]<< " |\n"
       << "   +---+---+---+---+---+\n ";
       
}

bool wwin( char xo[25], char & winner, bool &f){
  
  if (((xo[0]==xo[1]) && (xo[1]==xo[2]) && (xo[2]==xo[3]) && (xo[3]==xo[4]) && (xo[1]=='x')) ||
     ((xo[5]==xo[6]) && (xo[6]==xo[7]) && (xo[7]==xo[8]) && (xo[8]==xo[9]) && (xo[9]=='x')) ||
     ((xo[10]==xo[11]) && (xo[11]==xo[12]) && (xo[12]==xo[13]) && (xo[13]==xo[14]) && (xo[11]=='x')) ||
     ((xo[15]==xo[16]) && (xo[16]==xo[17]) && (xo[17]==xo[18]) && (xo[18]==xo[19]) && (xo[15]=='x')) ||
     ((xo[20]==xo[21]) && (xo[21]==xo[22]) && (xo[22]==xo[23]) && (xo[23]==xo[24]) && (xo[21]=='x')) ||
     ((xo[0]==xo[5]) && (xo[5]==xo[10]) && (xo[10]==xo[15]) && (xo[15]==xo[20]) && (xo[15]=='x')) ||
     ((xo[1]==xo[6]) && (xo[6]==xo[11]) && (xo[11]==xo[16]) && (xo[16]==xo[21]) && (xo[21]=='x')) ||
     ((xo[2]==xo[7]) && (xo[7]==xo[12]) && (xo[12]==xo[17]) && (xo[17]==xo[22]) && (xo[22]=='x')) ||
     ((xo[3]==xo[8]) && (xo[8]==xo[13]) && (xo[13]==xo[18]) && (xo[18]==xo[23]) && (xo[23]=='x')) ||
     ((xo[4]==xo[9]) && (xo[9]==xo[14]) && (xo[14]==xo[19]) && (xo[19]==xo[14]) && (xo[24]=='x')) ||
     ((xo[0]==xo[6]) && (xo[6]==xo[12]) && (xo[12]==xo[18]) && (xo[18]==xo[24]) && (xo[24]=='x')) ||
     ((xo[4]==xo[8]) && (xo[8]==xo[12]) && (xo[12]==xo[16]) && (xo[16]==xo[20]) && (xo[20]=='x')))
    {
     f = true;
     winner = 'x';
     } else 
     
     if (((xo[0]==xo[1]) && (xo[1]==xo[2]) && (xo[2]==xo[3]) && (xo[3]==xo[4]) && (xo[1]=='x')) ||
     ((xo[5]==xo[6]) && (xo[6]==xo[7]) && (xo[7]==xo[8]) && (xo[8]==xo[9]) && (xo[9]=='x')) ||
     ((xo[10]==xo[11]) && (xo[11]==xo[12]) && (xo[12]==xo[13]) && (xo[13]==xo[14]) && (xo[11]=='x')) ||
     ((xo[15]==xo[16]) && (xo[16]==xo[17]) && (xo[17]==xo[18]) && (xo[18]==xo[19]) && (xo[15]=='x')) ||
     ((xo[20]==xo[21]) && (xo[21]==xo[22]) && (xo[22]==xo[23]) && (xo[23]==xo[24]) && (xo[21]=='x')) ||
     ((xo[0]==xo[5]) && (xo[5]==xo[10]) && (xo[10]==xo[15]) && (xo[15]==xo[20]) && (xo[15]=='x')) ||
     ((xo[1]==xo[6]) && (xo[6]==xo[11]) && (xo[11]==xo[16]) && (xo[16]==xo[21]) && (xo[21]=='x')) ||
     ((xo[2]==xo[7]) && (xo[7]==xo[12]) && (xo[12]==xo[17]) && (xo[17]==xo[22]) && (xo[22]=='x')) ||
     ((xo[3]==xo[8]) && (xo[8]==xo[13]) && (xo[13]==xo[18]) && (xo[18]==xo[23]) && (xo[23]=='x')) ||
     ((xo[4]==xo[9]) && (xo[9]==xo[14]) && (xo[14]==xo[19]) && (xo[19]==xo[14]) && (xo[24]=='x')) ||
     ((xo[0]==xo[6]) && (xo[6]==xo[12]) && (xo[12]==xo[18]) && (xo[18]==xo[24]) && (xo[24]=='x')) ||
     ((xo[4]==xo[8]) && (xo[8]==xo[12]) && (xo[12]==xo[16]) && (xo[16]==xo[20]) && (xo[20]=='x'))) {
     f = true;
     winner = '0';
     } 
     return f;
     
}
bool draw (char xo[25], bool &drw)
{ 
  int n=0;
  for (int i=0 ; i<25; i++){
     if (xo[i] != ' ') n++;
  if (n==25) drw = true; 
  return draw;
}



int main ()
{
  char xo[25],winner; bool hw= false, drw = false;
  
  string name[25],nam[25];
  name[0]= "a1"; name[1]= "a2"; name[2]= "a3"; name[3]= "a4"; name[4]= "a5";
  name[5]= "b1"; name[6]= "b2"; name[7]= "b3"; name[8]= "b4"; name[9]= "b5";
  name[10]= "c1"; name[11]= "c2"; name[12]= "c3"; name[13]= "c4"; name[14]= "c5";
  name[15]= "d1"; name[16]= "d2"; name[17]= "d3"; name[18]= "d4"; name[19]= "d5";
  name[20]= "e1"; name[21]= "e2"; name[22]= "e3"; name[23]= "e4"; name[24]= "e5";
  
  for (int i =0 ; i<25; i++)
   {
     xo[i]=' ';
     nam[i]= " ";
     
   }
    table(xo);
  int k =1;
  do { 
    
    int  t = 1 , j = 0;
       for (int i=0 ; i<25; i++){
    
    if (xo[i]== ' ') {
      j++;
      cout << j << ".mark cell";
      t = i/5;
      switch (t){
      case 0: cout << " a";break;
      case 1: cout << " b";break;
      case 2: cout << " c";break;
      case 3: cout << " d";break;
      case 4: cout << " e";break;
    }
    t = i%5;
     switch (t){
      case 0: cout << "1 " << "as ";break;
      case 1: cout << "2 " << "as ";break;
      case 2: cout << "3 " << "as ";break;
      case 3: cout << "4 " << "as ";break;
      case 4: cout << "5 " << "as ";break;
    } 
    
    if (k== 1) cout << "x\n";
     else cout << "0\n";
    }
  }
  cout << j+1<< ".quit\n";
  j =0;
  int number;
  cin >> number;
  
  for (int i =0; i < 25 ; i++)
    {
      if (xo[i]==' ') {
      j++;
      if (number == j && k == 1) {xo[i]='x';k--;break;}
       else if (number == j && k == 0) {xo[i]='0';k++;break;}
        
      }}
      table(xo);
      hw = wwin( xo,winner,hw);
       if (hw) {
         cout << winner << " won";}
         
         
         if (draw(xo,drw)){ cout << "drawn"; 
       }}
    
   while (!hw);
    
    
   return 0;
}
