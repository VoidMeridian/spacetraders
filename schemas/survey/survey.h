//
// Created by meridiandawn on 1/4/24.
//

#ifndef SPACETRADERS_SCHEMAS_SURVEY_SURVEY_H_
#define SPACETRADERS_SCHEMAS_SURVEY_SURVEY_H_
#include "deposit.h"
typedef struct {
  char *signature;
  char *symbol;
  st_survey_deposit_t *deposits;
  char *expiration;
  enum { SURVEY_SMALL, SURVEY_MODERATE, SURVEY_LARGE } size;
} st_survey_t;
#endif //SPACETRADERS_SCHEMAS_SURVEY_SURVEY_H_
