#include <stdio.h>
#include <stdlib.h>

int main()
{

//*listening*//
double list, mi;
printf("listening necha bal boldi");

scanf("%lf", &list);


if (list > 40){
    printf("error!\n");
}else if(list >= 39, list == 40){
    printf("listening 9.0\n" ,list);
    mi = 9.0;
}else if(list >= 37, list >= 38){
    printf("listening 8.5\n") ,list;
    mi = 8.5;
}else if(list >= 34, list >= 36){
    printf("listening 8.0\n", list);
    mi = 8.0;
}else if(list >= 32, list >= 33){
    printf("listening 7.5\n", list);
    mi = 7.5;
}else if(list >= 27, list >= 31){
    printf("listening 7.0\n", list);
    mi = 7.0;
}else if(list >= 25, list >= 26){
    printf("listening 6.5\n", list);
    mi = 6.5;
}else if(list >= 21, list >= 24){
    printf("listening 6.0\n", list);
    mi = 6.0;
}else if(list >= 18, list >= 20){
    printf("listening 5.5\n", list);
    mi = 5.5;
}else if(list >= 16, list >= 17){
    printf("listening 5.0\n", list);
    mi = 5.0;
}else if(list >= 14, list >= 15){
    printf("listening 4.5\n", list);
    mi = 4.5;
}else if(list >= 11, list >= 13){
    printf("listening 4.0\n", list);
    mi = 4.0;
}else if(list >= 8,  list >= 10){
    printf("listening 3.5\n", list);
    mi = 3.5;
}else if(list >= 6,  list >= 7){
    printf("listening 3.0\n", list);
    mi = 3.0;
}else if(list >= 4,  list >= 5){
    printf("listening 2.5\n", list);
    mi = 2.5;
}else if(list >= 1,  list >= 2){
    printf("listening 2.0\n", list);
    mi = 2.0;
}else{
    printf("problem!" , list);
}

//*reading*//
double read, ni ;
printf("reading necha bal boldi");
scanf("%lf", &read);


if (read > 40){
    printf("error!\n");
}else if(read >= 39, read == 40){
    printf("reading 9.0\n" ,read);
    ni = 9.0;
}else if(read >= 37, read >= 38){
    printf("reading 8.5\n") ,read;
    ni = 8.5;
}else if(read >= 34, read >= 36){
    printf("reading 8.0\n", read);
    ni = 8.0;
}else if(read >= 32, read >= 33){
    printf("reading 7.5\n", read);
    ni = 7.5;
}else if(read >= 27, read >= 31){
    printf("reading 7.0\n", read);
    ni = 7.0;
}else if(read >= 25, read >= 26){
    printf("reading 6.5\n", read);
    ni = 6.5;
}else if(read >= 21, read >= 24){
    printf("reading 6.0\n", read);
    ni = 6.0;
}else if(read >= 18, read >= 20){
    printf("reading 5.5\n", read);
    ni = 5.5;
}else if(read >= 16, read >= 17){
    printf("reading 5.0\n", read);
    ni = 5.0;
}else if(read >= 14, read >= 15){
    printf("reading 4.5\n", read);
    ni = 4.5;
}else if(read >= 11, read >= 13){
    printf("reading 4.0\n", read);
    ni = 4.0;
}else if(read >= 8, read >= 10){
    printf("reading 3.5\n", read);
    ni = 3.5;
}else if(read >= 6, read >= 7){
    printf("reading 3.0\n", read);
    ni = 3.0;
}else if(read >= 4, read >= 5){
    printf("reading 2.5\n", read);
    ni = 2.5;
}else if(read >= 1, read >= 2){
    printf("reading 2.0\n", read);
    ni = 2.0;
}else{
    printf("problem!" , read);
}


//*write*//


double write;
printf("writing necha bal boldi");
scanf("%lf", &write);
printf("writing %.1lf\n", write);


//*speaking*//



double speak;
printf("speaking necha bal boldi");
scanf("%lf", &speak);
printf("speaking %.1lf\n\n", speak);




//*resaull
printf("RESAULT\n\n");


printf ("listing %.1lf\n", mi);
printf ("reading %.1lf\n", ni);
printf ("writing %.1lf\n", write);
printf ("speaking %.1lf\n\n", speak);



    if (((mi+ni+write+speak)/4)== 9.0 && ((mi+ni+write+speak)/4) >= 8.75){
        printf(" overal 9.0\n");
    } else if (((mi+ni+write+speak)/4)== 8.5 && ((mi+ni+write+speak)/4) >= 8.35){
        printf(" overal 8.5\n");
    } else if (((mi+ni+write+speak)/4)== 8.0 && ((mi+ni+write+respeak)/4) >= 7.75){
        printf(" overal 8.0\n");
    } else if (((mi+ni+write+speak)/4)== 7.5 && ((mi+ni+write+speak)/4) >= 7.35){
        printf(" overal 7.5\n");
    } else if (((mi+ni+write+speak)/4)== 7.0 && ((mi+ni+write+speak)/4) >= 6.75){
        printf(" overal 7.0\n");
    } else if (((mi+ni+write+speak)/4)== 6.5 && ((mi+ni+write+speak)/4) >= 6.35){
        printf(" overal 6.5\n");
    } else if (((mi+ni+write+speak)/4)== 6.0 && ((mi+ni+write+speak)/4) >= 5.75){
        printf(" overal 6.0\n");
    } else if (((mi+ni+write+speak)/4)== 5.5 && ((mi+ni+write+speak)/4) >= 5.35){
        printf(" overal 5.5\n");
    } else if (((mi+ni+write+speak)/4)== 5.0 && ((mi+ni+write+speak)/4) >= 4.75){
        printf(" overal 5.0\n");
    } else if (((mi+ni+write+speak)/4)== 4.5 && ((mi+ni+write+speak)/4) >= 4.35){
        printf(" overal 4.5\n");
    } else if (((mi+ni+write+speak)/4)== 4.0 && ((mi+ni+write+speak)/4) >= 3.75){
        printf(" overal 4.0\n");
    } else if (((mi+ni+write+speak)/4)== 3.5 && ((mi+ni+write+speak)/4) >= 3.35){
        printf(" overal 3.5\n");
    } else if (((mi+ni+write+speak)/4)== 3.0 && ((mi+ni+write+speak)/4) >= 2.75){
        printf(" overal 3.0\n");
    } else if (((mi+ni+write+speak)/4)== 2.5 && ((mi+ni+write+speak)/4) >= 2.35){
        printf(" overal 2.5\n");
    } else if (((mi+ni+write+speak)/4)== 2.0 && ((mi+ni+write+speak)/4) >= 1.75){
        printf(" overal 2.0\n");
    }

    return 0;
}
