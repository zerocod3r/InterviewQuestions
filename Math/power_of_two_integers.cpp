bool Solution::isPower(int a) {
    int i,j;
    if(a==1)
        return 1;
    if(a==2)
        return 0;
    for(i=2;i<=sqrt(a);i++){
        j=0;
        if(a%i==0){
            long long int temp=i;
            while(temp<=a){
                temp=temp*i;
                if(temp==a){
                    j=1;
                    break;
                }
            }
        }
        if(j==1)
            break;
    }
    if(j==1)
        //cout<<"True"<<endl;
        return true;
    else
        //cout<<"False"<<endl;
        return false;
}
