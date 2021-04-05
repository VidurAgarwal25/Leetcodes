class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        int x=0,f;
        int l=s.length();
        for(int i=0;i<s.length()-1;i++){
            f=0;
            if(s[i]=='I'&&s[i+1]=='V')
            {x+=4;f=1;}
            if(s[i]=='I'&&s[i+1]=='X')
            {x+=9;f=1;}
            if(s[i]=='X'&&s[i+1]=='L')
            {f=1;x+=40;}
            if(s[i]=='X'&&s[i+1]=='C')
            {x+=90;f=1;}
            if(s[i]=='C'&&s[i+1]=='D')
            {f=1;x+=400;}
            if(s[i]=='C'&&s[i+1]=='M')
            {f=1;x+=900;}
            if(f==0){
                x+=m[s[i]];
            }
            else{
                i++;
            }
        }
        if(l>=2){
        if((s[l-2]=='I'&&s[l-1]=='V')||(s[l-2]=='I'&&s[l-1]=='X')||(s[l-2]=='X'&&s[l-1]=='L')||(s[l-2]=='X'&&s[l-1]=='C')||(s[l-2]=='C'&&s[l-1]=='D')||(s[l-2]=='C'&&s[l-1]=='M'))
            x+=0;
         else
            x+=m[s[l-1]];
        }
        else
            x+=m[s[l-1]];
        return x;
        
    }
};