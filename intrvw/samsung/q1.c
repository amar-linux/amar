// 2d array 
// each of the cell is  'r' 'l' 'u' 'd'
//

int is_path_valid(char a[n][n],int n){

    for (int i =0; i< n;){
        for (int j=0; j< n;){
            if (a[i][j] == 'r'){
                j = j+1;
                
            }else if(a[i][j] == 'l'){
                j = j-1;
                
            }
            }else if (a[i][j] == 'd'){
                i = i+1;
            }else if (a[i][j] == 'u'){
                i = i-1;
            }
            if ( (i <0 || i> n) || (j < 0 || j > n) ){
                return -1;
            }

        }
    }
    return 1;
}
