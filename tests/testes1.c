#include "/workspace/TP1_Confiabilidade/unity/unity.h"
#include "/workspace/TP1_Confiabilidade/src/sort.h"



    

void setUp(void)
{
  /* This is run before EACH TEST */
  
}

void tearDown(void)
{
}


void teste_bubble_sort(){
    int array[] = {5, 3, 8, 6, 2};
    TEST_ASSERT_EQUAL(0,sort(array,5,"On2",BUBBLE));
}


int main(void) {
    UNITY_BEGIN();
    RUN_TEST(teste_bubble_sort);    
    return UNITY_END();
}