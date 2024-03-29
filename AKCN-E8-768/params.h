#ifndef PARAMS_H
#define PARAMS_H

#define N 768
#define Q 7681
#define LOGQ 13
#define COMPRESSEDY 10
#define COMPRESSEDV 3

#define SYMBYTES 32
#define SSBYTES  48
#define POLYBYTES ((LOGQ*N)/8)  //1344
#define POLYYBYTES    ((COMPRESSEDY*N)/8)  //640  1280
#define POLYVBYTES    ((COMPRESSEDV*N)/8)

#define CPAPKE_PUBLICKEYBYTES  (POLYBYTES + SYMBYTES)
#define CPAPKE_SECRETKEYBYTES  (POLYBYTES)
#define CPAPKE_CIPHERTEXTBYTES (POLYYBYTES + POLYVBYTES)

#define CPAKEM_PUBLICKEYBYTES CPAPKE_PUBLICKEYBYTES
#define CPAKEM_SECRETKEYBYTES CPAPKE_SECRETKEYBYTES
#define CPAKEM_CIPHERTEXTBYTES CPAPKE_CIPHERTEXTBYTES

#define CCAKEM_PUBLICKEYBYTES CPAPKE_PUBLICKEYBYTES
#define CCAKEM_SECRETKEYBYTES (CPAPKE_SECRETKEYBYTES + CPAPKE_PUBLICKEYBYTES + 2*SYMBYTES)
#define CCAKEM_CIPHERTEXTBYTES (CPAPKE_CIPHERTEXTBYTES + SYMBYTES)

#endif
