class Solution {
public:
    string reformatDate(string date) {
        int len=date.length();
        string res="";
        for(int i=len-4;i<len;i++)
            res=res+date[i];
        res=res+'-';
        string mo;
        for(int i=len-8;i<len;i++){
            if(date[i]==' ')
                break;
            mo+=date[i];
        }
        string x;
        if(mo=="Jan")
            x="01";
        else if(mo=="Feb")
            x="02";
        else if(mo=="Mar")
            x="03";
        else if(mo=="Apr")
            x="04";
        else if(mo=="May")
            x="05";
        else if(mo=="Jun")
            x="06";
        else if(mo=="Jul")
            x="07";
        else if(mo=="Aug")
            x="08";
        else if(mo=="Sep")
            x="09";
        else if(mo=="Oct")
            x="10";
        else if(mo=="Nov")
            x="11";
        else
            x="12";
        res=res+x+'-';
        if(!(date[1]>=48&&date[1]<=57))
        {
            res=res+'0';
            res=res+date[0];
        }
        else{
            res=res+date[0];
            res=res+date[1];
        }
        return res;
    }
};