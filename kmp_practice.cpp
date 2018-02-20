#include<bits/stdc++.h>
using namespace std;

int N,M;
string txt,pat;
int lps[1000000];
int cnt=0;
void count(){
	
int i = 0;  // index for txt[]
    int j  = 0;  // index for pat[]
    while (i < N)
    {
        if (pat[j] == txt[i])
        {
            j++; // if matches then move forward both the pointers ....
            i++;
        }
 
        if (j == M)
        {
            //printf("Found pattern at index %d n", i-j); // pattern is found at this index ....
            cnt++;
            j = lps[j-1];
        }
 
        // mismatch after j matches
        else if (i < N && pat[j] != txt[i])
        {
            // Do not match lps[0..lps[j-1]] characters,
            // they will match anyway
            if (j != 0)
                j = lps[j-1];
            else
                i = i+1;
        }
    }
}

void prefix_function (string pat) {

    //int n = (int) Z.length();

    

     lps[0]=0;

    for (int i=1; i<M; ++i) {

        int j = lps[i-1];

        while (j > 0 && pat[i] != pat[j])

            j = lps[j-1];

        if (pat[i] == pat[j])  ++j;

        lps[i] = j;

    }

    
}

int main(){

	
	cin>>pat>>txt;
	N=txt.length();
	M=pat.length();
	prefix_function(pat);
	count();
return 0;
}
