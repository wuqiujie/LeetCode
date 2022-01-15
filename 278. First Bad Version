class Solution {
public:

int firstBadVersion(int n) {

long min = 0;

long max = n;

while(min <= max){
	long mid =( min + max )/2;
	bool b_mid = isBadVersion(mid);
	bool b_mid_1 =isBadVersion(mid+1);

	if(b_mid == false && b_mid_1 == true){ return mid+1;}
	if(b_mid == false && b_mid_1  == false){ min= mid+1; }
	if( b_mid == true && b_mid_1  == true){ max= mid-1; }

}

return -1;

}

};
