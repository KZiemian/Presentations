#!/bin/bash

# BASH script for creating PDF verion of presentations in the dark color
# style.

# Defining command used to compile LaTeX files
command_latex="time lualatex"

# Just to be sure, that everything works correctly
cd "$HOME/GitHub-repositories/Presentations/Computer-science-Presentations/Podstawy-informatyki-ETC-Prezentacje"



# Creating PDF files
$command_latex PI-01-A-Wprowadzenie-do-ETC.tex
$command_latex PI-01-B-Kompilacja-i-zagadnienia-pokrewne.tex
$command_latex PI-Appendix-B-Opinie-o-języku-C.tex


# Moving PDFs to separate directory
mv PI-01-A-Wprowadzenie-do-ETC.pdf Presentations-PDF-style-dark
mv PI-01-B-Kompilacja-i-zagadnienia-pokrewne.pdf Presentations-PDF-style-dark
mv PI-Appendix-B-Opinie-o-języku-C.pdf Presentations-PDF-style-dark
