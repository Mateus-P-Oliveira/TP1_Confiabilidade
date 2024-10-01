#include "/workspace/TP1_Confiabilidade/unity/unity.h"
#include "/workspace/TP1_Confiabilidade/src/sort.h"



    

void setUp(void)
{
  /* This is run before EACH TEST */
  
}

void tearDown(void)
{
}

/*void teste_bubble_sort(){
    int array[] = {5, 3, 8, 6, 2};
    TEST_ASSERT_EQUAL(0,sort(array,5,"On",BUBBLE));
}


int main(void) {
    UNITY_BEGIN();
    RUN_TEST(teste_bubble_sort);    
    return UNITY_END();
}*/

void teste_counting_sort();
void teste_radix_sort();
void teste_bubble_sort();
void teste_insertion_sort();
void teste_selection_sort();
void teste_heap_sort();
void teste_merge_sort();
void teste_quick_sort();
void teste_invalid_length();
void teste_invalid_type();
void teste_invalid_algorithm();

int main(void) {
    UNITY_BEGIN();

    RUN_TEST(teste_counting_sort);
    RUN_TEST(teste_radix_sort);
    RUN_TEST(teste_bubble_sort);
    RUN_TEST(teste_insertion_sort);
    RUN_TEST(teste_selection_sort);
    RUN_TEST(teste_heap_sort);
    RUN_TEST(teste_merge_sort);
    RUN_TEST(teste_quick_sort);
    RUN_TEST(teste_invalid_length);
    RUN_TEST(teste_invalid_type);
    RUN_TEST(teste_invalid_algorithm);

    return UNITY_END();
}

void teste_counting_sort() { 
    int array[] = {4, 2, 3, 1};
    TEST_ASSERT_EQUAL(0, sort(array, 4, "On", COUNTING));
    int expected[] = {1, 2, 3, 4};
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 4);
}

void teste_radix_sort() { 
    int array[] = {170, 45, 75, 90};
    TEST_ASSERT_EQUAL(0, sort(array, 4, "On", RADIX));
    int expected[] = {45, 75, 90, 170};
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 4);
}

void teste_bubble_sort() { 
    int array[] = {64, 34, 25, 12, 22, 11, 90};
    TEST_ASSERT_EQUAL(0, sort(array, 7, "On2", BUBBLE));
    int expected[] = {11, 12, 22, 25, 34, 64, 90};
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 7);
}

void teste_insertion_sort() { 
    int array[] = {12, 11, 13, 5, 6};
    TEST_ASSERT_EQUAL(0, sort(array, 5, "On2", INSERTION));
    int expected[] = {5, 6, 11, 12, 13};
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 5);
}

void teste_selection_sort() { 
    int array[] = {29, 10, 14, 37, 13};
    TEST_ASSERT_EQUAL(0, sort(array, 5, "On2", SELECTION));
    int expected[] = {10, 13, 14, 29, 37};
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 5);
}

void teste_heap_sort() { 
    int array[] = {3, 19, 1, 14, 8, 7};
    TEST_ASSERT_EQUAL(0, sort(array, 6, "Onlogn", HEAP));
    int expected[] = {1, 3, 7, 8, 14, 19};
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 6);
}

void teste_merge_sort() { 
    int array[] = {38, 27, 43, 3, 9, 82, 10};
    TEST_ASSERT_EQUAL(0, sort(array, 7, "Onlogn", MERGE));
    int expected[] = {3, 9, 10, 27, 38, 43, 82};
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 7);
}

void teste_quick_sort() { 
    int array[] = {10, 7, 8, 9, 1, 5};
    TEST_ASSERT_EQUAL(0, sort(array, 6, "Onlogn", QUICK));
    int expected[] = {1, 5, 7, 8, 9, 10};
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, array, 6);
}

void teste_invalid_length() { 
    int array[] = {1};
    TEST_ASSERT_EQUAL(1, sort(array, 1, "On", COUNTING));
}

void teste_invalid_type() { 
    int array[] = {1, 2, 3};
    TEST_ASSERT_EQUAL(1, sort(array, 3, "InvalidType", COUNTING));
}

void teste_invalid_algorithm() { 
    int array[] = {1, 2, 3};
    TEST_ASSERT_EQUAL(1, sort(array, 3, "On", -1));  // Algoritmo inválido
}