class Solution {
public:
    string invert(string s){
        for(int i =0; i<s.length(); ++i){
            s[i] = (s[i] == '0') ? '1':'0';
        }
        return s;
    }
    char findKthBit(int n, int k) {
        string S1 = "0";
        string S2 = S1+"1"+"1";
        string Sn = S2;
        if(n == 1 && k == 1){
            return S1[0];
        }
        if( n == 2 && k <=3){
            return S2[k-1]; 
        }
        for( int i = 3; i<= n; ++i){
            string inv = invert(Sn);
            reverse(inv.begin(),inv.end());
            Sn = Sn+"1"+ inv;
        }
        return Sn[k-1];
    }
};
