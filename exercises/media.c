#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

     
#define weight_of_laboratory_work 2
#define weight_of_the_semester_assessment 3
#define weight_final_exam 5

/**
 * @author oie
*/

int main() {
    float laboratory_work_grade, final_exam_grade, semester_assessment_grade, final_result;

    printf("Laboratory work grade: ");
    scanf("%f", &laboratory_work_grade);

    printf("Semester assesmente grade: ");
    scanf("%f", &semester_assessment_grade);

    printf("Final exam grade: ");
    scanf("%f", &final_exam_grade);

    final_result = (
        (laboratory_work_grade * weight_of_laboratory_work)
        + 
        (final_exam_grade * weight_final_exam)
        + 
        (semester_assessment_grade * weight_of_the_semester_assessment)) 
        / 
        (weight_final_exam + weight_of_the_semester_assessment + weight_of_laboratory_work);

//        if (final_result >= 0 && final_result <= 10) {
//         int grade = (int)final_result;
//         switch (grade) {
//             case 10:
//             case 9:
//                 printf("A:%.2f\n", final_result);
//                 break;
//             case 8:
//                 printf("B:%.2f\n", final_result);
//                 break;
//             case 7:
//                 printf("C:%.2f\n", final_result);
//                 break;
//             case 6:
//                 printf("D:%.2f\n", final_result);
//                 break;
//             default:
//                 printf("E:%.2f\n", final_result);
//         }
//     } else {
//         printf("Invalid grades\n");
//     }

//     return 0;
// }

    if(final_result >= 8) {
        printf("A:%2.f\n", final_result);
    }

    
    if(final_result >= 7 && final_result < 8) {
        printf("B:%2.f\n", final_result);
    }

    if(final_result >= 6 && final_result < 7) {
        printf("C:%2.f\n", final_result);
    }

    if(final_result >= 5 && final_result < 6) {
        printf("D:%2.f\n", final_result);
    }

    
    if(final_result >= 0 && final_result < 5) {
        printf("E:%2.f\n", final_result);
    }

    return 0;
}