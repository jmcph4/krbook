#include <stdio.h>

main()
{
    char sc = '\0', sc_prev = '\0';
    unsigned char uc = '\0', uc_prev = '\0';
    short ss = 0, ss_prev = 0;
    unsigned short us = 0, us_prev = 0;
    int si = 0, si_prev = 0;
    unsigned int ui = 0, ui_prev = 0;
    long sl = 0, sl_prev = 0;
    unsigned long ul = 0, ul_prev = 0;

    /* char */
    while(1) {
        if(sc_prev > sc) {
            printf("char max: %ld (%c)\n", sc_prev, sc_prev);
            break;
        }

        sc_prev = sc;
        sc++;
    }

    while(1) {
        if(sc_prev < sc) {
            printf("char min: %d (%c)\n", sc_prev, sc_prev);
            break;
        }

        sc_prev = sc;
        sc--;
    }

    /* unsigned char */
    while(1) {
        if(uc_prev > uc) {
            printf("unsigned char max: %lu (%c)\n", uc_prev, uc_prev);
            break;
        }

        uc_prev = uc;
        uc++;
    }

    while(1) {
        if(uc_prev < uc) {
            printf("unsigned char min: %lu (%c)\n", uc_prev, uc_prev);
            break;
        }

        uc_prev = uc;
        uc--;
    }

    /* short */
    while(1) {
        if(ss_prev > ss) {
            printf("short max: %ld\n", ss_prev);
            break;
        }

        ss_prev = ss;
        ss++;
    }

    while(1) {
        if(ss_prev < ss) {
            printf("short min: %d\n", ss_prev);
            break;
        }

        ss_prev = ss;
        ss--;
    }

    /* unsigned short */
    while(1) {
        if(us_prev > us) {
            printf("unsigned short max: %lu\n", us_prev);
            break;
        }

        us_prev = us;
        us++;
    }

    while(1) {
        if(us_prev < us) {
            printf("unsigned short min: %lu\n", us_prev);
            break;
        }

        us_prev = us;
        us--;
    }

    /* int */
    while(1) {
        if(si_prev > si) {
            printf("integer max: %ld\n", si_prev);
            break;
        }

        si_prev = si;
        si++;
    }

    while(1) {
        if(si_prev < si) {
            printf("integer min: %d\n", si_prev);
            break;
        }

        si_prev = si;
        si--;
    }

    /* unsigned int */
    while(1) {
        if(ui_prev > ui) {
            printf("unsigned integer max: %lu\n", ui_prev);
            break;
        }

        ui_prev = ui;
        ui++;
    }

    while(1) {
        if(ui_prev < ui) {
            printf("unsigned integer min: %lu\n", ui_prev);
            break;
        }

        ui_prev = ui;
        ui--;
    }

    /* long */
    while(1) {
        if(sl_prev > sl) {
            printf("long max: %ld\n", sl_prev);
            break;
        }

        sl_prev = sl;
        sl++;
    }

    while(1) {
        if(sl_prev < sl) {
            printf("long min: %ld\n", sl_prev);
            break;
        }

        sl_prev = sl;
        sl--;
    }

    /* unsigned long */
    while(1) {
        if(ul_prev > ul) {
            printf("unsigned long max: %lu\n", ul_prev);
            break;
        }

        ul_prev = ul;
        ul++;
    }

    while(1) {
        if(ul_prev < ul) {
            printf("unsigned long min: %lu\n", ul_prev);
            break;
        }

        ul_prev = ul;
        ul--;
    }
}
