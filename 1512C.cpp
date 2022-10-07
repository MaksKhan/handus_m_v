#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

 
int main()
{
    int n, a, b, k;
    std::string s;
    std::cin >> n;
    std::vector<std::string> v(n);
    
    for(int j = 0; j < n; j ++){
        
        std::cin >> a >> b;
        std::cin >> s;
        k = s.size();
        
        for(int i = 0; i < k / 2; i ++){
 
            if((s.at(i) == '0') && (s.at(k - 1 - i) == '?')){
                s[k - 1 - i] = '0';
                a -= 2;
            }
            else if((s.at(i) == '?') && (s.at(k - 1 - i) == '0')){
                s[i] = '0';
                a -= 2;
            }
            else if((s.at(i) == '1') &&(s.at(k - 1 - i) == '?')){
                s[k - 1 - i] = '1';
                b -=2 ;
            }
            else if((s.at(i) == '?') &&(s.at(k - 1 - i) == '1')){
                s[i] = '1';
                b -=2 ;
            }
            else if((s.at(i) == '1') &&(s.at(k - 1 - i) == '1')){
                b -= 2;
            }
            else if((s.at(i) == '0') &&(s.at(k - 1 - i) == '0')){
                a -= 2;
            }
            if((s.at(i) =='0') && (s.at(k - i - 1) == '1') || (s.at(i) =='1') && (s.at(k - i - 1) == '0')){
                v[j] = "-1";
            }
        }
        for(int i = 0; i < k / 2; i ++){
            if((s.at(i) == '?') && (s.at(k - i - 1) == '?')){
                if(a >= 2){
                    s[i] = '0';
                    s[k - i - 1] = '0';
                    a -= 2;
                }
                else if(b >= 2){
                    s[i] = '1';
                    s[k - i - 1] = '1';
                    b -= 2;
                }
                else{
                    v[j] = "-1";
                }
            }
        }
 
        if(k % 2 == 1){
            if(s.at(k / 2) == '0'){
                a--;
            }
            else if(s.at(k / 2) == '1'){
                b--;
            }
            if(s.at(k / 2) == '?'){
                if (a == 1){
                    s[k / 2] = '0';
                    a --;
                }
                else if(b == 1){
                    s[k / 2] = '1';
                    b --;
                }
            }
        }
 
        
        if(v[j] != "-1"){
            if ((a == 0) && (b == 0)){
                v[j] = s;
            }
            else{
                v[j] = "-1";
            }
        }
        
        
        
        
        
        
        s.clear();
    }
    for(auto &i: v){
            std::cout << i << std::endl;
        }
    
}
