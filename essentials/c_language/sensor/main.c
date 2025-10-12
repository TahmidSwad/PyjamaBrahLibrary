#include <stdio.h>

enum sensor_type {
    TEMPERATURE,
    HUMIDITY,
    PRESSURE
};

enum sensor_state {
    ACTIVE,
    INACTIVE,
    ERROR
};

struct temperature_data {
    short int min;
    short int max;
    float reading;
} __attribute__((packed));

struct humidity_data {
    float calibration;
    float reading;
} __attribute__((packed));

struct pressure_data {
    short int alititude;
    float reading;
} __attribute__((packed));

union readings {
    struct temperature_data temp;
    struct humidity_data humidity;
    struct pressure_data pressure;
};

struct sensor {
    short int id;
    char name[20];
    enum sensor_type type;
    enum sensor_state state;
    union readings value;
} __attribute__((packed));

int main() {
    struct sensor sensor_list[2] = {0};
    unsigned int sensor_count = 0;
    unsigned int init_sensor;

    while (1) {
        if (sensor_count >= 2) {
            printf("No slots to add more sensors!\n");
            break;
        }

        init_sensor = 0;
        printf("Want to add sensor? enter 1 to add, 0 to skip: ");
        scanf("%u", &init_sensor);
        scanf("%*c");

        if(init_sensor == 0) {
            break;
        }

        printf("ID: ");
        scanf("%hd", &sensor_list[sensor_count].id);
        scanf("%*c");
        
        printf("Name: ");
        scanf("%s", (char *)&sensor_list[sensor_count].name);
        scanf("%*c");

        char type;
        printf("Type (t, h, p): ");
        scanf("%c", &type);
        scanf("%*c");

        switch (type) {
            case 't': sensor_list[sensor_count].type = TEMPERATURE; 
                break;
            case 'h': sensor_list[sensor_count].type = HUMIDITY; 
                break;
            case 'p': sensor_list[sensor_count].type = PRESSURE; 
                break;
        }

        sensor_list[sensor_count].state = INACTIVE;

        switch (sensor_list[sensor_count].type) {
            case TEMPERATURE:
                printf("min: ");
                scanf("%hd", &sensor_list[sensor_count].value.temp.min);
                scanf("%*c");

                printf("max: ");
                scanf("%hd", &sensor_list[sensor_count].value.temp.max);
                scanf("%*c");

                printf("reading: ");
                scanf("%f", &sensor_list[sensor_count].value.temp.reading);
                scanf("%*c");
            break;
            case HUMIDITY:
                printf("calibration: ");
                scanf("%f", &sensor_list[sensor_count].value.humidity.calibration);
                scanf("%*c");

                printf("reading: ");
                scanf("%f", &sensor_list[sensor_count].value.humidity.reading);
                scanf("%*c");
            break;
            case PRESSURE:
                printf("altitude: ");
                scanf("%hd", &sensor_list[sensor_count].value.pressure.alititude);
                scanf("%*c");

                printf("reading: ");
                scanf("%f", &sensor_list[sensor_count].value.pressure.reading);
                scanf("%*c");
            break;
        }

        sensor_count = sensor_count + 1;
        sensor_list[sensor_count].state = ACTIVE;
    }

    for (int i = 0; i < sensor_count; i = i + 1) {
        printf("Printing Sensor Date for Sensor %d\n", i);
        printf("-- ID: %hd\n", sensor_list[i].id);
        printf("-- Name: %s\n", sensor_list[i].name);
        printf("-- Type: %u\n", sensor_list[i].type);
        switch (sensor_list[i].type) {
            case TEMPERATURE:
                printf("-- -- min: %hd\n", sensor_list[i].value.temp.min);
                printf("-- -- max: %hd\n", sensor_list[i].value.temp.max);
                printf("-- -- reading: %f\n", sensor_list[i].value.temp.reading);
            break;
            case HUMIDITY:
                printf("-- -- calibration: %f\n", sensor_list[i].value.humidity.calibration);
                printf("-- -- reading: %f\n", sensor_list[i].value.humidity.reading);
            break;
            case PRESSURE:
                printf("-- -- altitude: %hd\n", sensor_list[i].value.pressure.alititude);
                printf("-- -- reading: %f\n", sensor_list[i].value.pressure.reading);
            break;
        }
    }
    return 0;
}
