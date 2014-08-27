all : index.html

index.html : index.Rmd
	-rm .cache/*
	Rscript -e "library(slidify);slidify('$<')"
	-rm .cache/*