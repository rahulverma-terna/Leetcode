

int trap(int* height, int heightSize){
    int *lmax=(int *)malloc(sizeof(int)*heightSize);
     int *rmax=(int *)malloc(sizeof(int)*heightSize);
    int max=0,total=0;

    for(int i=0;i<heightSize;i++)
    {
    lmax[i]=max;
    if(max<height[i]){
        max=height[i];
    }
    }
    max=0;
    for(int i=heightSize-1;i>=0;i--)
    {
      rmax[i]=max;
    if(max<height[i]){
        max=height[i];
    }
        
    }
     printf(" ");
     for(int i=0;i<heightSize;i++)
    {
       printf("%d,",lmax[i]);}
    printf("\n");
     printf(" ");
     for(int i=0;i<heightSize;i++)
    {
       printf("%d,",rmax[i]);}
    for(int i=0;i<heightSize;i++)
    {
        if(lmax[i]<rmax[i]){
            if(+lmax[i]-height[i]>0)
            total=total+lmax[i]-height[i];
        }
        else if(rmax[i]-height[i]>0) 
            total=total+rmax[i]-height[i];
    }
        return total;}
