#!bin/bash

#Directory containing the C files
DIRECTORY=${1:-.}


# Find all .c files in the specified directory
for file in $(find "$DIRECTORY" -type f -name "*.c"); do
	echo "Processing $file"
	# Apply betty-style
	betty-style "$file"
	# Apply betty-doc
	betty-doc "$file"

	done

	echo "All files processed."

