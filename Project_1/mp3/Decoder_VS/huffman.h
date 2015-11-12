/**********************************************************************
 * MPEG/audio ����/�������                                           *
 * VERSION 4.1                                                        *
 *********************************************************************/ 
#ifndef _HUFFMAN_H_ 
#define _HUFFMAN_H_ 
#define HUFFBITS unsigned long int
//#define HUFFBITS unsigned long
#define HTN 34
#define MXOFF 250
struct huffcodetab {
  char tablename[3];  /*�ַ�, ���� table_description  */
  unsigned int xlen;  
  unsigned int ylen;  
  unsigned int linbits; /* linbits  ��Ŀ    */
  unsigned int linmax;  /*�洢��linbits�е������Ŀ   */
  int ref;    /*a positive value indicates a reference*/
  unsigned int treelen; /*����������    */
  unsigned char(*val)[2];/*������       */ 
};

extern struct huffcodetab ht[HTN];/* ȫ���ڴ��   */
        /* ����huffcodtable headers������ */
        /* 0..31 Huffman code table 0..31 */
        /* 32,33 count1-tables      */
extern int read_decoder_table();
extern int huffman_decoder(struct huffcodetab *, int *, int*, int*, int*);

#endif
