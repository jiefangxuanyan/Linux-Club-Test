source ~/.vim/vundle_vimrc.vim
filetype on

set nocp
set ci
set si
set ai

set nu
set hls
set incsearch

set ts=4
set sw=4

let g:clang_auto_select=1
"let g:clang_complete_copen=1
let g:clang_hl_errors=1
"let g:clang_periodic_quickfix=1
"let g:clang_close_preview=1
"let g:clang_snippets=1
let g:clang_use_library=1
let g:clang_user_options='-std=c++11'

let g:syntastic_cpp_compiler_options = '-std=c++11'

let g:acp_behaviorKeywordLength=1
let g:acp_behavior={
			\"h":[{"meets":"acp#meetsForKeyword","command":"\<C-x>\<C-o>"}],
			\"hpp":[{"meets":"acp#meetsForKeyword","command":"\<C-x>\<C-o>"}],
			\"c":[{"meets":"acp#meetsForKeyword","command":"\<C-x>\<C-o>"}],
			\"cxx":[{"meets":"acp#meetsForKeyword","command":"\<C-x>\<C-o>"}],
			\"cc":[{"meets":"acp#meetsForKeyword","command":"\<C-x>\<C-o>"}],
			\"cpp":[{"meets":"acp#meetsForKeyword","command":"\<C-x>\<C-o>"}],
			\"python":[{"meets":"acp#meetsForKeyword","command":"\<C-x>\<C-o>"},
			\{"meets":"acp#meetsForPythonOmni","command":"\<C-x>\<C-o>"}],
			\"*":[],
			\}

set statusline+=%#warningmsg#
set statusline+=%{SyntasticStatuslineFlag()}
set statusline+=%*

