//program to increment and print the value of a using a pointer

#include <stdio.h>

void main(){
    int a=10;
    int *ptr = &a;

    (*ptr)++;    //b"\x00|\xe3\x08.B\n@\xbf&\x15V\x99\xb6\xb3`\x7f,0\xde\xe3S\x0c\x0e[\xe7%R\xe1u\x99\xeb\xaa\x01\xcc\xe0\xd0\xe1\xf36$\xafS\x08%eM\t\xe1K\x9f\xa9\xa4\xd1_\x84\x18\xd9\x85a\xc4\xe4\x00\xf8\x97%\xbd\xdf\xef\x8e\xa1\xd8\xe3\xfa'\xb0\x06\x8bV\xbd+\x96\xf0\x14\xbb\x87\x8d>g\xf8\x0e@K\x14\xe3\x94\xcb\xe9\x16\xc7J\xaar1\xdf\r\xf9,\xcbW\xd0\xdf\xd0\x18\x835\xc2\x87\xb8\xea4\xcb\x99E\xafQU\x0b"b'gAAAAABl9SKYlafyFVmyVhUwRwQY9FJATIJ_rpnKIpNTQNo5XfhAep83wrpQvT33VwKBEc7eU9-R87VwG6DcOGh0frisMfbox7IshtRhmu_MielrXOH0VNvRd6y3FOnkGNTSfkAmllLPsL74RVcl_zqh40nO1oKJ_FwQyAYLe_kvZ5OjgwGVaBd6Dma07bDus32P5KUy6etfPBCyLpxS9qK5zpdbWLMyyA9IhU-UKKxy1ukBsSsEzl18nJ85lX2FZevM-to4Lv1sTKUNyftb3s-qRAQ6lny-xUyRzIAYMd3l_A_8SqLmlTK2VM7lrxPcjohxf_OZo7ybBRqIUbrpDVeYEf-7rpF7nGPw843O_Bn2wxOB2qy9Ox56CMWZA-Sp9s1Vv6QDFT7cjMDxizsvotWV4TjHokVMNw=='
    printf("%d", *ptr);
}
