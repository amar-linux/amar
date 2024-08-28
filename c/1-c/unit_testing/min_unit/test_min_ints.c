#include"minunit.h"
#include"get_min_int.h"
#include<stdio.h>


int tests_run =0;

char* test_some_array(){
    int myarray[]= {1,2,3,4,5,-64};
    bool error;
    mu_assert("should return -3", get_min_int(myarray, 6,&error)==-64);
    mu_assert("should have no error", error== false);
    return 0;
}

char *test_positive_min_array(){
    int myarray[]={4,2,1,970,60,165,3};
    bool error;
    mu_assert("should return 1", get_min_int(myarray, 7,&error)==1);
    mu_assert("should have no error", error== false);
    return 0;

}

char *test_empty_array(){
    int myarray[]={};
    bool error;
    mu_assert("should return 0", get_min_int(myarray, 0,&error)==0);
    mu_assert("should have no error", error== true);
    return 0;

}

char *test_NULL_error_case(){
    int myarray[]={4,2,1,970,60,165,3};
    bool error;
    mu_assert("should return 0, NULL array", get_min_int(NULL, 7,NULL)==0);
    mu_assert("should return 0, negative length", get_min_int(myarray, -7,&error)==0);
    mu_assert("should have error", error== true);
    mu_assert("should return 1(correct, NULL case)", get_min_int(myarray,7,&error)==1);
    return 0;

}

char *all_tests(){
    mu_run_test(test_some_array);
    mu_run_test(test_positive_min_array);
    mu_run_test(test_empty_array);
    mu_run_test(test_NULL_error_case);
    return 0;
}


int main(){
    char *test_results= all_tests();

    if (test_results != 0)
    {
        printf ("Error. test failed. MSG: %s\n", test_results);

    }else{
        printf ("All test passed:(%i total tests)\n", tests_run);
    }
}
