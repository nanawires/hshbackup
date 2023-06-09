#!/usr/bin/env bash

set -e

SCRIPTDIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
ROOTDIR="$(git -C "$SCRIPTDIR" rev-parse --show-toplevel)"

set -x

AUTHORS_FILE="${ROOTDIR}/AUTHORS"
TMP_FILE=$(mktemp)

git -C "$ROOTDIR" log --format='%aN <%aE>' | LC_ALL=C.UTF-8 sort -uf > "$TMP_FILE"

if ! cmp --silent "$AUTHORS_FILE" "$TMP_FILE"; then
	echo "# This file lists all contributors to the repository." > "$AUTHORS_FILE"
	echo "# Format: Name <email>" >> "$AUTHORS_FILE"
	echo "# Generated by keygenmkr.sh; do not edit." >> "$AUTHORS_FILE"
	echo "" >> "$AUTHORS_FILE"
	cat "$TMP_FILE" >> "$AUTHORS_FILE"
	echo "" >> "$AUTHORS_FILE"
	fi

	rm "$TMP_FILE"
