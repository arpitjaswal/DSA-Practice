*         int p=people.size()-1;
int sum=0,count=0;
for(int i=p-1;i>=0;i--){
sum+=people[p];
if(sum>limit){
sum=people[i];
count++;
}
else if(sum==limit){
count++;
sum=0;
}
}
return count;
*