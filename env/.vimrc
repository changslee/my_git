set nocompatible
set backspace=indent,eol,start
set autoindent
if has("vms")
	set nobackup
else
	set backup
endif
set nobackup
set ruler
set showcmd
set incsearch
set hlsearch
set ts=8
set foldmethod=marker
set nonu

color desert

if &t_Co > 1
	syntax enable
endif


highlight ExtraWhitespace ctermbg=red guibg=red
match ExtraWhitespace /\s\+$/

"autocmd FileType nc,c,cpp,java,py autocmd BufWritePre <buffer> :%s/\s\+$//e


map <F2> :w!<CR>
map <F3> :view ./<CR>
map <F4> :q!<CR>
map <F5> :w!<CR>:!make mango3<CR>
map <F6> :w!<CR>:!make mango3 install.1<CR>
map <F7> :w!<CR>:!make telosb<CR>
map <F8> :w!<CR>:!make telosb install.1<CR>
map <F9> :w!<CR>:!make clean && make <CR>
map <F11> :tabnew /home/Suchang/work<CR>
map <F12> :tabnew /opt/tinyos-2.x/tos<CR>
