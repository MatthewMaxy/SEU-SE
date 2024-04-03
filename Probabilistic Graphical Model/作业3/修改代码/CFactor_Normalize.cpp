/////////////////////////////////////////////////////////////////////////////////////////////
//文件名：		CFactor_Normalize.cpp
//功  能：		规范化因子
//开发者：		高志强
//日  期：		2021年03月15日
//更  新：		2021年03月23日
//更  新：		2021年03月29日
//长  度：		40行
/////////////////////////////////////////////////////////////////////////////////////////////
#include "stdafx.h"									//MFC标准头文件
#include "CFactor.h"								//因子类头文件
#include "Helper.h"									//辅助函数头文件


//名  称：		Normalize()
//功  能：		规范化因子
//参  数：		无
//返回值：		无
void CFactor::Normalize()
{
    //补充
    float Normal_num = 0.0f;
    for (unsigned int i = 0; i < m_FactorRows.size(); ++i)
        Normal_num += m_FactorRows[i].fValue;

    for (unsigned int i = 0; i < m_FactorRows.size(); ++i)
        m_FactorRows[i].fValue /= Normal_num;
}