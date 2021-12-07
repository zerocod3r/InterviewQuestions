int i,j,k;
    int n=a.size();
    int temp;
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for (i = 0; i < n; i++) {
        reverse(a[i].begin(),a[i].end());
    }
   
    for (i = 0; i < n; i++) {
      cout<<endl;
      for (j = 0; j < n; j++) {
         cout<<a[i][j]<<" ";
      }
   }