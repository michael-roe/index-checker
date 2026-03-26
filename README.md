# Index Checker

These are some rather specialized tools for checking for OCR errors in
ebooks that are being prepared for Project Gutenberg.

The idea is that we have:

(a) an ebook in which the terms expected to be in the index are
enclosed in `<g></g>` tags. (This denotes gesperrt text in the markup
that is used internally by Distributed Proofreaders). 

(b) an index to the ebook, one index term per line, with the index term 
followed by a space and then one or more page numbers

The gesperrt command will extract text enclosed in `<g></g>` tags, one per line.

The denumber command will remove the page numbers from the index.

The two can them be compared using the Unix tools sort, uniq, and comm.
