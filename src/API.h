#ifndef API_H
#define API_H
#include <stdint.h>

//��������ָ��
typedef void(*pred16x16)(uint8_t *src, int stride);

//�˺�������ϵͳ֧�ֵ������ָ�����p_func����Ϊ��Ӧָ��Ż���ĺ���ָ��
void ff_h264_pred_init(pred16x16 *p_func);

#endif /* API_H */