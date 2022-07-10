#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(15);
    hash_table_set(ht, "betty", "betty");
    hash_table_set(ht, "hetairas", "hetairas");
    hash_table_set(ht, "mentioner", "mentioner");
    hash_table_set(ht, "heliotropes", "heliotropes");
    hash_table_set(ht, "depravement", "depravement");
    hash_table_set(ht, "serafins", "serafins");
    hash_table_set(ht, "stylist", "stylist");
    hash_table_set(ht, "subgenera", "subgenera");
    hash_table_set(ht, "synaphea", "synaphea");
    hash_table_set(ht, "joyful", "joyful");
    hash_table_set(ht, "redescribed", "redescribed");
    hash_table_set(ht, "urites", "urites");
    hash_table_set(ht, "dram", "dram");
    hash_table_set(ht, "vivency", "vivency");
    return (EXIT_SUCCESS);
}