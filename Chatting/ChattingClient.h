﻿#include <windows.h>

//Definir uma constante para facilitar a leitura do protótipo da função
//Este .h deve ser incluído no projecto que o vai usar (modo implícito)
#define DllExport extern "C"

#ifdef CHATTING_EXPORTS
	#define DLL_IMP_API DllExport __declspec(dllexport)
#else
	#define DLL_IMP_API __declspec(dllimport)
#endif

//Para forçar o método a localizar-se sem namespace
extern "C" {
	//Funções a serem exportadas/importadas
	DLL_IMP_API int Test(PTCHAR str);
	DLL_IMP_API int Autenticar(TCHAR *login, TCHAR *pass);
	//DLL_IMP_API int LerListaUtilizadores(UTILIZADOR *utilizadores); //{?}
	DLL_IMP_API int IniciarConversa(TCHAR *utilizador);
	DLL_IMP_API int DesligarConversa();
	DLL_IMP_API int EnviarMensagemPrivada(TCHAR *msg);
	DLL_IMP_API void EnviarMensagemPublica(TCHAR *msg);
	//DLL_IMP_API CHAT LerInformacaoInicial(); //{?}
	DLL_IMP_API void LerMensagensPublicas();
	DLL_IMP_API void LerMensagensPrivadas();
	DLL_IMP_API int Sair();
	DLL_IMP_API int Desligar();
}