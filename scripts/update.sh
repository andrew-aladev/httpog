#!/bin/bash -l
set -e

cd "$(dirname $0)"

git fetch --all || true
git fetch --tags || true
git remote | xargs -n1 -I {} git rebase "{}/$(git branch --show-current)" || true
